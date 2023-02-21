#pragma once

#include <string>
#include <vector>

class GNW
{
public:
	struct Config
	{
		struct Key
		{
			std::string name;
			std::string signal;
			std::string input;
		};

		int exp = 0;
		std::string firmware[2];
		std::string cheats[2];
		std::vector<Key> keys;
		std::vector<std::string> clones;
	};

public:
	GNW(const std::string& name);
	const std::string& GetName() const;
	const std::string& GetCodePath() const;
	const std::string& GetAssetsPath() const;
	const std::string  GetAssetPath(const std::string& type) const;
	const Config& GetConfig() const;

private:
	void ParseConfig(const std::string& ini);

private:
	std::string m_name;
	std::string m_code;
	std::string m_assets;
	Config m_config;
};