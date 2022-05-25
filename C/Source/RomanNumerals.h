//
// Created by Mathi on 2022-02-04.
//

#ifndef C_ROMANNUMERALS_H
#define C_ROMANNUMERALS_H

struct RomanNumber
{
	char* Letter;
	int Number;
};

int fromRoman(char* roman);

void toRoman(int number, char* destination);

#endif //C_ROMANNUMERALS_H
