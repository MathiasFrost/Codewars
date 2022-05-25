//
// Created by Mathi on 2022-02-04.
//

#include <string.h>
#include <stdio.h>

#include "RomanNumerals.h"

const struct RomanNumber RomanNumbers[] = {
		{ "M",  1000 },
		{ "CM", 900 },
		{ "D",  500 },
		{ "CD", 400 },
		{ "C",  100 },
		{ "XC", 90 },
		{ "L",  50 },
		{ "XL", 40 },
		{ "X",  10 },
		{ "IX", 9 },
		{ "V",  5 },
		{ "IV", 4 },
		{ "I",  1 }
};

int fromRoman(char* roman)
{

	int ret = 0;
	int i = 0;
	while (*roman)
	{
		if (strstr(roman, RomanNumbers[i].Letter) == roman)
		{
			ret += RomanNumbers[i].Number;
			roman += strlen(RomanNumbers[i].Letter);
		}
		else
		{ i++; }
	}
	return ret;
}

void toRoman(int number, char* destination)
{

	int i = 0;
	*destination = 0;
	while (number)
	{
		if (number >= RomanNumbers[i].Number)
		{
			destination += sprintf_s(destination, 3, "%s", RomanNumbers[i].Letter);
			number -= RomanNumbers[i].Number;
		}
		else
		{ i++; }
	}
}