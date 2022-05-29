// Created by Mathi on 2022-02-20.

#include "AlphabeticalAddition.h"

unsigned char AlphabeticalAddition__AddLetters(size_t n, unsigned char* string)
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
