// https://www.codewars.com/kata/59f44c7bd4b36946fd000052/c

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "histogram.h"

#define OFFSET 97

char* histogram_hist(const char* s)
{
	unsigned short count[26] = { 0 };
	for (size_t i = 0; i < strlen(s); i++)
	{
		const char letter = s[i];
		count[letter - OFFSET]++;
	}

	char* res = calloc(400, sizeof(char));
	for (unsigned char i = 0; i < 4; i++)
	{
		const unsigned char letter = "uwxz"[i];
		const unsigned short num = count[letter - OFFSET];
		if (num)
		{
			char prefix[50];
			sprintf(prefix, "%c  %-5d %*.*s\n", letter, num, num, num, "*******************************************");
			strcat(res, prefix);
		}
	}
	res[strlen(res) - 1] = '\0';
	return res;
}
