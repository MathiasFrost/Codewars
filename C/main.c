#include <stdio.h>
#include "src/roman_numerals.h"
#include "src/histogram.h"
#include "src/next_bigger.h"
#include "src/alphabetical_addition.h"
#include "src/bit_counting.h"
#include "src/play_pass.h"

int main()
{
	printf("Codewars C\n");

	printf("'IX' is %d\n", roman_numerals_from_roman("IX"));

	char number[100] = { 0 };
	roman_numerals_to_roman(1642, number);
	printf("1642 is '%s'\n", number);

	const char* histStr = "tpwaemuqxdmwqbqrjbeosjnejqorxdozsxnrgpgqkeihqwybzyymqeazfkyiucesxwutgszbenzvgxibxrlvmzihcb";
	char* histogram = histogram_hist(histStr);
	printf("%s\n", histogram);

	printf("Next bigger of 1234567890 is %lld\n", next_bigger_next_bigger_number(1234567890));

	printf("y + c + b is %c\n", alphabetical_addition_add_letters(3, (unsigned char*)"ycb"));

	printf("number of bits in 1234 is %zu\n", bit_counting_count_bits(1234));

	printf("Passphrase: %s\n", play_pass_playPass("TEst", 3));

	return 0;
}
