// https://www.codewars.com/kata/59590976838112bfea0000fa/cpp

#include "Beggars.hpp"

std::vector<int> Beggars::Get(const std::vector<int>& values, unsigned int n)
{
	auto arr = std::vector<int>(n);
	for (unsigned int i = 0; i < n; ++i)
	{
		int res = 0;
		for (unsigned int j = i; j < values.size(); j += n)
		{
			res += values[j];
		}
		arr[i] = res;
	}
	return arr;
}
