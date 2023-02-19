#include "Dump.h"
#include <fstream>
#include <algorithm>

Dump::Section::Section(const std::string& name, const std::string& comment)
	: m_name(name)
	, m_size(false)
{
	AddComment(comment);
}

void Dump::Section::AddComment(const std::string& comment)
{
	m_comments.push_back(comment);
}

int Dump::Section::GetOffset() const
{
	return m_bytes.size();
}

void Dump::Section::Append(uint8_t byte)
{
	m_bytes.push_back(byte);
}

void Dump::Section::Append(std::vector<uint8_t> bytes)
{
	std::copy(bytes.begin(), bytes.end(), std::back_inserter(m_bytes));
}

void Dump::Section::Append(const std::string& file)
{
    std::ifstream stream(file, std::ios::binary);
	std::noskipws(stream);
	std::istream_iterator<uint8_t> start(stream);
	std::istream_iterator<uint8_t> end;
	m_bytes.insert(m_bytes.end(), start, end);

	std::string name = file.substr(file.find_last_of('/') + 1);
	AddComment("file: " + name);
}

void Dump::Section::AddSize()
{
	m_size = true;
}

void Dump::Section::Save(std::ostream& stream)
{
	auto nibble = [](int v) -> char
	{
		v &= 0x0F;
		return (v < 0x0A ? '0' + v : 'A' + v - 0x0A);
	};

	stream << "// " << std::string(77, '-') << std::endl;
	for (auto& comment : m_comments)
	{
		stream << "// " << comment << std::endl;
	}
	stream << "// " << "size: " << m_bytes.size() << " bytes" << std::endl;
	stream << "// " << std::string(77, '-') << std::endl;
	stream << std::endl;
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

int Dump::AddSection(const std::string& name, const std::string& comment)
{
	m_sections.emplace_back(name, comment);
	return m_sections.size() - 1;
}

Dump::Section& Dump::operator[](int index)
{
	return m_sections[index];
}

void Dump::Save(const std::string& file)
{
	std::ofstream stream(file);
	for (auto& section : m_sections)
	{
		section.Save(stream);
		stream << std::endl;
	}
	stream.close();
}
