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
		virtual void AddComment(const std::string& comment);
		virtual void Save(std::ostream& stream);

	protected:
		const std::string m_name;
		std::vector<std::string> m_comments;
	};

public:
	class Array : public Section
	{
	public:
		Array(const std::string& name, const std::string& comment);
		
		int  GetOffset() const;
		void Append(uint8_t byte);
		void Append(std::vector<uint8_t> bytes);
		void Append(const std::string& file);

		void AddSize();
		void Save(std::ostream& stream) override;

	private:
		std::vector<uint8_t> m_bytes;
		bool m_size;
	};

	class Enum : public Section
	{
	public:
		Enum(const std::string& name, const std::string& comment);

		void Save(std::ostream& stream) override;
	};

	using Sections = std::vector<std::shared_ptr<Section>>;

public:
	int AddSection(Section* section);
	Section& operator[](int index);
	void Save(const std::string& file);

private:
	Sections m_sections;
};
