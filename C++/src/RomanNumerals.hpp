// https://www.codewars.com/kata/51b66044bce5799a7f000003/cpp

#pragma once

#include <string>
#include <vector>

struct RomanNumber
{
	std::string Letter;
	unsigned int Number;
};

class RomanNumerals
{
public:
	unsigned int FromRoman(std::string rn);
	
	std::string ToRoman(unsigned int n);

private:
	const std::vector<RomanNumber> RomanNumbers = {
			{ "M" , 1000 },
			{ "CM",  900 },
			{ "D" ,  500 },
			{ "CD",  400 },
			{ "C" ,  100 },
			{ "XC",   90 },
			{ "L" ,   50 },
			{ "XL",   40 },
			{ "X" ,   10 },
			{ "IX",    9 },
			{ "V" ,    5 },
			{ "IV",    4 },
			{ "I" ,    1 }
	};
};
