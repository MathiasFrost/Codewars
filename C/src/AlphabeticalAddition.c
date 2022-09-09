// https://www.codewars.com/kata/5d50e3914861a500121e1958/c

#include "AlphabeticalAddition.h"

unsigned char AlphabeticalAddition_AddLetters(size_t n, unsigned char* string)
{
	string[n] = 0;
	if (*string)
	{
		*string -= '`';
		string++;
		while (*string)
		{
			*string -= '`';
			string--;
			while (*string)
			{
				string++;
				(*string)++;
				string--;
				(*string)--;
				
				string++;
				*string -= 27;
				if (*string)
				{
					*string += 27;
				}
				else
				{
					*string = 1;
				}
				string--;
			}
			string += 2;
		}
		return *--string + '`';
	}
	else
	{
		return 'z';
	}
}
