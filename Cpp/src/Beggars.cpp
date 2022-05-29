//
// Created by Mathi on 2022-05-23.
//

#include "Beggars.hpp"

std::vector<int> Beggars::beggars(const std::vector<int>& values, unsigned int n)
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
