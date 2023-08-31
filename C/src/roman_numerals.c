// https://www.codewars.com/kata/51b66044bce5799a7f000003/c

#include <string.h>
#include <stdio.h>

#include "roman_numerals.h"

const static struct roman_number roman_number[] = {
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

int roman_numerals_from_roman(char* roman)
{
	int ret = 0;
	int i = 0;
	while (*roman)
	{
		if (strstr(roman, roman_number[i].letter) == roman)
		{
			ret += roman_number[i].number;
			roman += strlen(roman_number[i].letter);
		}
		else
		{
			i++;
		}
	}
	return ret;
}

void roman_numerals_to_roman(int number, char* destination)
{
	int i = 0;
	*destination = 0;
	while (number)
	{
		if (number >= roman_number[i].number)
		{
			destination += sprintf(destination, "%s", roman_number[i].letter);
			number -= roman_number[i].number;
		}
		else
		{
			i++;
		}
	}
}
