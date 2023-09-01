#include <iostream>

#include "src/roman_numerals.hpp"
#include "src/histogram.hpp"
#include "src/beggars.hpp"
#include "src/play_pass.hpp"

int main()
{
	std::cout << "Codewars C++\n";

	auto* romanNumerals = new RomanNumerals();
	std::cout << "IX is " << romanNumerals->from_roman("IX") << std::endl;

	std::cout << "13 is " << romanNumerals->to_roman(13) << std::endl;

	const std::string hist = "tpwaemuqxdmwqbqrjbeosjnejqorxdozsxnrgpgqkeihqwybzyymqeazfkyiucesxwutgszbenzvgxibxrlvmzihcb";
	std::cout << Histogram::hist(hist) << std::endl;

	std::cout << Beggars::get(std::vector{ 1, 2, 3, 4, 5 }, 2).size() << std::endl;

	std::cout << PlayPass::playPass("Test", 4) << std::endl;
}
