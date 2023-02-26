#include "Dump.h"
#include <fstream>
#include <algorithm>
#include <sstream>

namespace
{
	char nibble(int v)
	{
		v &= 0x0F;
		return (v < 0x0A ? '0' + v : 'A' + v - 0x0A);
	};
}

// -----------------------------------------------------------------------------

Dump::Section::Section(const std::string& name, const std::string& comment)
	: m_name(name)
{
	AddComment(comment);
}

void Dump::Section::AddComment(const std::string& comment)
{
	m_comments.push_back(comment);
}

void Dump::Section::Save(std::ostream& stream)
{
	stream << "// " << std::string(77, '-') << std::endl;
	for (auto& comment : m_comments)
	{
		stream << "// " << comment << std::endl;
	}
	stream << "// " << std::string(77, '-') << std::endl;
	stream << std::endl;
}

// -----------------------------------------------------------------------------

Dump::Array::Array(const std::string& name, const std::string& comment)
	: Section(name, comment)
{
}

int Dump::Array::GetOffset() const
{
	return m_bytes.size();
}

void Dump::Array::Append(uint8_t byte)
{
	m_bytes.push_back(byte);
}

void Dump::Array::Append(std::vector<uint8_t> bytes)
{
	std::copy(bytes.begin(), bytes.end(), std::back_inserter(m_bytes));
}

void Dump::Array::Append(const std::string& file)
{
	std::ifstream stream(file, std::ios::binary);
	std::noskipws(stream);
	std::istream_iterator<uint8_t> start(stream);
	std::istream_iterator<uint8_t> end;
	m_bytes.insert(m_bytes.end(), start, end);

	std::string name = file.substr(file.find_last_of('/') + 1);
	AddComment("file: " + name);
}

void Dump::Array::AddSize()
{
	m_size = true;
}

void Dump::Array::Save(std::ostream& stream)
{
	std::stringstream ss;
	ss << "size: " << m_bytes.size() << " bytes";
	Section::AddComment(ss.str());
	Section::Save(stream);

	stream << "const uint8_t " << m_name << "[] PROGMEM =" << std::endl;
	stream << "{" << std::endl;
	for (size_t i = 0; i < m_bytes.size(); ++i)
	{
		size_t col = (i % 8);
		if (col == 0)
		{
			stream << std::string(4, ' ');
		}
		stream << "0x" << nibble(m_bytes[i] >> 4) << nibble(m_bytes[i]);
		if (i < m_bytes.size() - 1)
		{
			stream << ',';
			if (col < 7) stream << ' '; else stream << std::endl;
		}
		else
		{
			stream << std::endl;
		}
	}
	stream << "};" << std::endl;

	if (m_size)
	{
		stream << "const size_t " << m_name << "_size = ";
		stream << m_bytes.size() << ';' << std::endl;
	}
}

// -----------------------------------------------------------------------------

Dump::Enum::Enum(const std::string& name, const std::string& comment)
	: Section(name, comment)
	, nameSpace(0)
{
}

void Dump::Enum::Append(const std::string& name, uint8_t value, const std::string& comment)
{
	m_values.push_back({ name, value, comment });
	nameSpace = std::max(nameSpace, name.length());
}

void Dump::Enum::Save(std::ostream& stream)
{
	Section::Save(stream);

	stream << "enum class " << m_name << std::endl;
	stream << "{" << std::endl;
	int count = m_values.size();
	for (auto& entry : m_values)
	{
		stream << std::string(4, ' ') << entry.name;
		stream << std::string(nameSpace - entry.name.length() + 1, ' ');
		stream << "= 0x";
		stream << nibble(entry.value >> 4) << nibble(entry.value);
		if (--count > 0) 
			stream << ','; else stream << ' ';
		if (!entry.comment.empty()) 
			stream << " // " << entry.comment;
		stream << std::endl;
	}
	stream << "};" << std::endl;
}

// -----------------------------------------------------------------------------

int Dump::AddSection(Section* section)
{
	m_sections.emplace_back(section);
	return m_sections.size() - 1;
}

Dump::Section& Dump::operator[](int index)
{
	return *m_sections[index];
}

void Dump::Save(const std::string& file)
{
	std::ofstream stream(file);
	for (auto& section : m_sections)
	{
		section->Save(stream);
		stream << std::endl;
	}
	m_sections.clear();
	stream.close();
}
