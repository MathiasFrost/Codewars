// https://www.codewars.com/kata/559536379512a64472000053/cpp

#include "play_pass.hpp"

char PlayPass::shift_char(char input, int n)
{
	if (input >= 'a' && input <= 'z') return (char)('a' + (input - 'a' + n) % 26);
	else if (input >= 'A' && input <= 'Z')return (char)('A' + (input - 'A' + n) % 26);
	else return input;
}

char PlayPass::complement_by_9(char input)
{
	if (input >= '0' && input <= '9') return (char)('9' - input + '0');
	return input;
}

char PlayPass::down_case_odd(char input, size_t i)
{
	if (i % 2 == 0) return input;
	if (input >= 'A' && input <= 'Z') return (char)(input + 32);
	return input;
}

std::string PlayPass::playPass(const std::string& s, int n)
{
	std::string res = s;
	for (size_t i = 0; i < res.length(); ++i)
	{
		res[i] = shift_char(res[i], n);
		res[i] = down_case_odd(res[i], i);
		res[i] = complement_by_9(res[i]);
	}

	std::reverse(res.begin(), res.end());
	return res;
}