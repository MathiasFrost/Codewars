// https://www.codewars.com/kata/51b66044bce5799a7f000003/cpp

#pragma once

#include <string>
#include <vector>

struct RomanNumber
{
	std::string letter;
	unsigned int number;
};

class RomanNumerals
{
public:
	unsigned int from_roman(std::string rn);

	std::string to_roman(unsigned int n);

private:
	const std::vector<RomanNumber> RomanNumbers = {
		{ "M", 1000 },
		{ "CM", 900 },
		{ "D", 500 },
		{ "CD", 400 },
		{ "C", 100 },
		{ "XC", 90 },
		{ "L", 50 },
		{ "XL", 40 },
		{ "X", 10 },
		{ "IX", 9 },
		{ "V", 5 },
		{ "IV", 4 },
		{ "I", 1 }
	};
};
