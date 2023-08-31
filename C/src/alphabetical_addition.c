// https://www.codewars.com/kata/5d50e3914861a500121e1958/c

#include <string.h>
#include <malloc.h>

#include "alphabetical_addition.h"

unsigned char alphabetical_addition_add_letters(size_t n, unsigned char* string)
{
	size_t len = strlen((char*)string);
	char* copy = malloc(len + 1);
	copy[len] = '\0';
	copy[n] = 0;
	if (*copy)
	{
		*copy -= '`';
		copy++;
		while (*copy)
		{
			*copy -= '`';
			copy--;
			while (*copy)
			{
				copy++;
				(*copy)++;
				copy--;
				(*copy)--;

				copy++;
				*copy -= 27;
				if (*copy)
				{
					*copy += 27;
				}
				else
				{
					*copy = 1;
				}
				copy--;
			}
			copy += 2;
		}
		return *--copy + '`';
	}
	else
	{
		return 'z';
	}
}
