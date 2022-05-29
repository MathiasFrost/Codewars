//
// Created by Mathi on 2022-02-04.
//

#ifndef CPP_ROMANNUMERALS_HPP
#define CPP_ROMANNUMERALS_HPP

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
	RomanNumerals();

	int from_roman(std::string rn);

	std::string to_roman(unsigned int n);

private:
	const std::vector<RomanNumber> RomanNumbers = {
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
};

#endif //CPP_ROMANNUMERALS_HPP
