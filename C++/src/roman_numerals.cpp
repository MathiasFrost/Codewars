// https://www.codewars.com/kata/51b66044bce5799a7f000003/cpp

#include "roman_numerals.hpp"

unsigned int RomanNumerals::from_roman(std::string rn)
{
	unsigned int ret = 0;
	int i = 0;
	while (rn.length())
	{
		const size_t pos = rn.find(RomanNumbers[i].letter);
		if (pos == 0)
		{
			ret += RomanNumbers[i].number;
			rn = rn.substr(RomanNumbers[i].letter.length());
		}
		else
		{
			i++;
		}
	}
	return ret;
}

std::string RomanNumerals::to_roman(unsigned int n)
{
	int i = 0;
	std::string ret;
	while (n)
	{
		if (n >= RomanNumbers[i].number)
		{
			ret += RomanNumbers[i].letter;
			n -= RomanNumbers[i].number;
		}
		else
		{
			i++;
		}
	}
	return ret;
}
