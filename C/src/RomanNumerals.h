// https://www.codewars.com/kata/51b66044bce5799a7f000003/c

#pragma once

struct RomanNumber
{
	char* Letter;
	int Number;
};

int RomanNumerals_FromRoman(char* roman);

void RomanNumerals_ToRoman(int number, char* destination);
