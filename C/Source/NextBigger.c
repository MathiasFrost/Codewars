//
// Created by Mathi on 2022-02-04.
//

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "NextBigger.h"

void reverse(char* str, size_t len)
{
	for (int i = 0; i < len / 2; i++)
	{
		char temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
	}
}

char* slice(const char* string, size_t start, size_t end)
{
	size_t len = end - start;
	char* substring = calloc(len, sizeof(int));

	for (size_t j = 0; j < len; j++)
		substring[j] = string[j + start];

	return substring;
}

long long string_to_number(char* string)
{
	size_t len = strlen(string);
	long long num = 0;

	for (int i = 0; i < len; i++)
		num += (long long)((string[i] - 48) * pow(10, (len - i - 1)));

	return num;
}

long long next_bigger_number(long long n)
{
	char digits[38] = { 0 };
	sprintf(digits, "%lld", n);
	size_t len = strlen(digits);
	reverse(digits, len);

	for (size_t j = 0; j < len; j++)
	{
		if (j > 0 && digits[j] < digits[j - 1])
		{
			size_t i = j;
			for (j = 0; j < len; j++)
			{
				if (digits[i] < digits[j])
				{
					char* left = slice(digits, i + 1, len);
					reverse(left, strlen(left));

					char* result = calloc(len, sizeof(int));
					sprintf(result, "%s%c", left, digits[j]);

					digits[j] = digits[i];

					char* right = slice(digits, 0, i);

					sprintf(result, "%s%s", result, right);

					return string_to_number(result);
				}
			}
		}
	}

	return n;
}
