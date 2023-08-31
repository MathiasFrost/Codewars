// https://www.codewars.com/kata/559536379512a64472000053/c

#include <malloc.h>
#include <string.h>
#include "play_pass.h"

static char shift_char(char input, int n)
{
	if (input >= 'a' && input <= 'z') return (char)('a' + (input - 'a' + n) % 26);
	else if (input >= 'A' && input <= 'Z')return (char)('A' + (input - 'A' + n) % 26);
	else return input;
}

static char complement_by_9(char input)
{
	if (input >= '0' && input <= '9') return (char)('9' - input + '0');
	return input;
}

static char down_case_odd(char input, size_t i)
{
	if (i % 2 == 0) return input;
	if (input >= 'A' && input <= 'Z') return (char)(input + 32);
	return input;
}

static char* reverse(char* s, size_t len)
{
	size_t start = 0;
	size_t end = len - 1;
	while (start < end)
	{
		char temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
	return s;
}

char* play_pass_playPass(char* s, int n)
{
	size_t len = strlen(s);
	char* copy = malloc(len + 1);
	copy[len] = '\0';
	for (size_t i = 0; i < len; ++i)
	{
		copy[i] = shift_char(s[i], n);
		copy[i] = down_case_odd(copy[i], i);
		copy[i] = complement_by_9(copy[i]);
	}


	return reverse(copy, len);
}
