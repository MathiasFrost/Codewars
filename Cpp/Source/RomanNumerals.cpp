//
// Created by Mathi on 2022-02-04.
//

#include "RomanNumerals.hpp"

RomanNumerals::RomanNumerals()
{
}

int RomanNumerals::from_roman(std::string rn)
{
	int ret = 0;
	int i = 0;
	while (rn.length())
	{
		const size_t pos = rn.find(RomanNumbers[i].Letter);
		if (pos == 0)
		{
			ret += RomanNumbers[i].Number;
			rn = rn.substr(RomanNumbers[i].Letter.length());
		}
		else i++;
	}
	return ret;
}

std::string RomanNumerals::to_roman(unsigned int n)
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
		else i++;
	}
	return ret;
}
