// https://www.codewars.com/kata/55983863da40caa2c900004e/c

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "next_bigger.h"

void Reverse(char* str, size_t len)
{
	for (int i = 0; i < len / 2; i++)
	{
		char temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
	}
}

char* Slice(const char* string, size_t start, size_t end)
{
	size_t len = end - start;
	char* substring = calloc(len + 1, sizeof(char));

	for (size_t j = 0; j < len; j++)
	{
		substring[j] = string[j + start];
	}

	return substring;
}

long long StringToNumber(char* string)
{
	size_t len = strlen(string);
	long long num = 0;

	for (int i = 0; i < len; i++)
	{
		num += (long long)((string[i] - 48) * pow(10, (double)(len - i - 1)));
	}

	return num;
}

long long next_bigger_next_bigger_number(long long n)
{
	char digits[38] = { 0 };
	sprintf(digits, "%lld", n);
	size_t len = strlen(digits);
	Reverse(digits, len);

	for (size_t j = 0; j < len; j++)
	{
		if (j > 0 && digits[j] < digits[j - 1])
		{
			size_t i = j;
			for (j = 0; j < len; j++)
			{
				if (digits[i] < digits[j])
				{
					char* left = Slice(digits, i + 1, len);
					Reverse(left, strlen(left));

					char* result = calloc(len + 1, sizeof(char));
					sprintf(result, "%s%c", left, digits[j]);

					digits[j] = digits[i];

					char* right = Slice(digits, 0, i);
					sprintf(result, "%s%s", result, right);

					long long res = StringToNumber(result);
					free(result);
					return res;
				}
			}
		}
	}

	return n;
}
