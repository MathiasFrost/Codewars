#include <iostream>
#include "Source/RomanNumerals.hpp"
#include "Source/Histogram.hpp"
#include "Source/Beggars.hpp"

int main()
{

	std::cout << "Codewars C++\n";

	auto* romanNumerals = new RomanNumerals();
	std::cout << "IX is " << romanNumerals->from_roman("IX") << std::endl;

	std::cout << "13 is " << romanNumerals->to_roman(13) << std::endl;

	std::cout << Histogram::hist(
			"tpwaemuqxdmwqbqrjbeosjnejqorxdozsxnrgpgqkeihqwybzyymqeazfkyiucesxwutgszbenzvgxibxrlvmzihcb") << std::endl;

	std::cout << Beggars::beggars(std::vector{ 1, 2, 3, 4, 5 }, 2).size() << std::endl;
}