// https://www.codewars.com/kata/51b66044bce5799a7f000003/cpp

#include "RomanNumerals.hpp"

unsigned int RomanNumerals::FromRoman(std::string rn)
{
	unsigned int ret = 0;
	int i = 0;
	while (rn.length())
	{
		const size_t pos = rn.find(RomanNumbers[i].Letter);
		if (pos == 0)
		{
			ret += RomanNumbers[i].Number;
			rn = rn.substr(RomanNumbers[i].Letter.length());
		}
		else
		{
			i++;
		}
	}
	return ret;
}

std::string RomanNumerals::ToRoman(unsigned int n)
{
	int i = 0;
	std::string ret;
	while (n)
	{
		if (n >= RomanNumbers[i].Number)
		{
			ret += RomanNumbers[i].Letter;
			n -= RomanNumbers[i].Number;
		}
		else
		{
			i++;
		}
	}
	return ret;
}
