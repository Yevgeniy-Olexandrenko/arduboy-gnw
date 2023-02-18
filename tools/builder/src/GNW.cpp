#include "GNW.h"
#include <fstream>

namespace
{
	const std::string c_path = "../../games/";

	std::string& trim(std::string& str)
	{
		str.erase(str.begin(), std::find_if(str.begin(), str.end(), [](int c) { return !std::isspace(c); }));
		str.erase(std::find_if(str.rbegin(), str.rend(), [](int c) { return !std::isspace(c); }).base(), str.end());
		return str;
	};
}

GNW::GNW(const std::string& name)
	: m_name(name)
	, m_code(c_path + name + "/")
	, m_assets(c_path + name + "/assets/")
{
	ParseConfig(GetAssetPath("ini"));
}

const std::string& GNW::GetName() const
{
	return m_name;
}

const std::string& GNW::GetCodePath() const
{
	return m_code;
}

const std::string& GNW::GetAssetsPath() const
{
	return m_assets;
}

const std::string GNW::GetAssetPath(const std::string& type) const
{
	return m_assets + m_name + "." + type;
}

const GNW::Config& GNW::GetConfig() const
{
	return m_config;
}

void GNW::ParseConfig(const std::string& ini)
{
	std::ifstream stream(ini);

	std::string line;
	while (std::getline(stream, line))
	{
		size_t pos = line.find('=');
		if (pos != std::string::npos)
		{
			std::string key = line.substr(0, pos);
			std::string val = line.substr(pos + 1);
			trim(key);
			trim(val);

			if (key == "exp")
			{
				m_config.exp = std::atoi(val.c_str());
			}

			if (key == "rom")
			{
				m_config.rom = m_assets + val;
			}

			pos = key.find("key_");
			if (pos != std::string::npos)
			{
				std::string name = key.substr(pos + 4);
				pos = val.find_first_of("->");

				if (pos != std::string::npos)
				{
					std::string signal = val.substr(0, pos);
					std::string input  = val.substr(pos + 2);
					m_config.keys.push_back({ trim(name), trim(signal), trim(input) });
				}
			}
		}
	}
}
