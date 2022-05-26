#include <stdio.h>
#include "Source/RomanNumerals.h"
#include "Source/Histogram.h"
#include "Source/NextBigger.h"
#include "Source/AlphabeticalAddition.h"

int main() {
  printf("Codewars C\n");

  printf("'IX' is %d\n", fromRoman("IX"));

  char number[100] = {0};
  toRoman(1642, number);
  printf("1642 is '%s'\n", number);

  const char *histStr = "tpwaemuqxdmwqbqrjbeosjnejqorxdozsxnrgpgqkeihqwybzyymqeazfkyiucesxwutgszbenzvgxibxrlvmzihcb";
  char	*histogram = hist(histStr);
  printf("%s\n", histogram);

  printf("Next bigger of 1234567890 is %lld\n", next_bigger_number(1234567890));

  printf("y + c + b is %c\n", add_letters(3, (unsigned char *)"ycb"));

  return 0;
}
