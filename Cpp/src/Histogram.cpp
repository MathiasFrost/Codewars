//
// Created by Mathi on 2022-02-08.
//

#include <sstream>
#include <map>

#include "Histogram.hpp"

std::string Histogram::hist(const std::string& s)
{
	std::map<char, unsigned short> count;
	for (char letter: s)
		count[letter]++;

	std::stringstream resStream;
	for (auto letter: "uwxz")
	{
		if (count[letter])
		{
			std::string num = (std::to_string(count[letter]) + "      ").substr(0, 6);
			std::string stars = std::string(count[letter], '*');
			resStream << letter << "  " << num << stars << '\n';
		}
	}

	std::string res = resStream.str();
	return res.substr(0, res.length() - 2);
}