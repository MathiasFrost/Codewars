#include "BitCounting.h"

size_t BitCounting_CountBits(unsigned value)
{
	unsigned char count = 0;
	while (value)
	{
		value &= (value - 1);
		count++;
	}
	return count;
}
