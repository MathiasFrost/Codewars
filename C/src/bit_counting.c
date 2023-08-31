#include "bit_counting.h"

__attribute__((unused)) size_t bit_counting_count_bits(unsigned value)
{
	unsigned char count = 0;
	while (value)
	{
		value &= (value - 1);
		count++;
	}
	return count;
}
