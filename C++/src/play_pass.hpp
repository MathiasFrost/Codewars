// https://www.codewars.com/kata/559536379512a64472000053/cpp

#pragma once

#include <string>

class PlayPass
{
public:
	static std::string playPass(const std::string& s, int n);

private:
	static char shift_char(char input, int n);

	static char complement_by_9(char input);

	static char down_case_odd(char input, size_t i);
};
