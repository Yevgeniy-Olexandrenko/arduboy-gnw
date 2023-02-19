#pragma once

#include <iostream>
#include <cstdint>
#include <string>
#include <vector>

class Dump
{
	class Section
	{
	public:
		Section(const std::string& name, const std::string& comment);
		void AddComment(const std::string& comment);

		int  GetOffset() const;
		void Append(uint8_t byte);
		void Append(std::vector<uint8_t> bytes);
		void Append(const std::string& file);

		void AddSize();
		void Save(std::ostream& stream);

	private:
		const std::string m_name;
		std::vector<std::string> m_comments;
		std::vector<uint8_t> m_bytes;
		bool m_size;
	};

public:
	int AddSection(const std::string& name, const std::string& comment);
	Section& operator[](int index);
	void Save(const std::string& file);

private:
	std::vector<Section> m_sections;
};
