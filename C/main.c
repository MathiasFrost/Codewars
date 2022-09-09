#include <stdio.h>
#include "src/RomanNumerals.h"
#include "src/Histogram.h"
#include "src/NextBigger.h"
#include "src/AlphabeticalAddition.h"
#include "src/BitCounting.h"

int main()
{
	printf("Codewars C\n");

	printf("'IX' is %d\n", RomanNumerals_FromRoman("IX"));

	char number[100] = {0};
	RomanNumerals_ToRoman(1642, number);
	printf("1642 is '%s'\n", number);

	const char *histStr = "tpwaemuqxdmwqbqrjbeosjnejqorxdozsxnrgpgqkeihqwybzyymqeazfkyiucesxwutgszbenzvgxibxrlvmzihcb";
	char *histogram = Histogram_Hist(histStr);
	printf("%s\n", histogram);

	printf("Next bigger of 1234567890 is %lld\n", NextBigger_NextBiggerNumber(1234567890));

	printf("y + c + b is %c\n", AlphabeticalAddition_AddLetters(3, (unsigned char*)"ycb"));

	printf("Number of bits in 1234 is %d\n", BitCounting_CountBits(1234));
	
	return 0;
}
