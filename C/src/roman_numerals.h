// https://www.codewars.com/kata/51b66044bce5799a7f000003/c

#pragma once

struct roman_number
{
	char* letter;
	int number;
};

int roman_numerals_from_roman(char* roman);

void roman_numerals_to_roman(int number, char* destination);
