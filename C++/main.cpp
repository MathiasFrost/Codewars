#include <iostream>

#include "src/RomanNumerals.hpp"
#include "src/Histogram.hpp"
#include "src/Beggars.hpp"

int main()
{
	std::cout << "Codewars C++\n";
	
	auto* romanNumerals = new RomanNumerals();
	std::cout << "IX is " << romanNumerals->FromRoman("IX") << std::endl;
	
	std::cout << "13 is " << romanNumerals->ToRoman(13) << std::endl;
	
	const std::string hist = "tpwaemuqxdmwqbqrjbeosjnejqorxdozsxnrgpgqkeihqwybzyymqeazfkyiucesxwutgszbenzvgxibxrlvmzihcb";
	std::cout << Histogram::Hist(hist) << std::endl;
	
	std::cout << Beggars::Get(std::vector { 1, 2, 3, 4, 5 }, 2).size() << std::endl;
}
