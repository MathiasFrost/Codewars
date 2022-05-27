from beggars import Beggars
from histogram import Histogram
from next_bigger import NextBigger
from roman_numerals import RomanNumerals


print("Codewars Python")

print(f"IX is {RomanNumerals.from_roman('XI')}")

print(f"13 is {RomanNumerals.to_roman(13)}")

print(f"Next bigger of 144 is {NextBigger.next_bigger(144)}")

hist = "tpwaemuqxdmwqbqrjbeosjnejqorxdozsxnrgpgqkeihqwybzyymqeazfkyiucesxwutgszbenzvgxibxrlvmzihcb"
print(Histogram.hist(hist))

print(Beggars.beggars([1, 2, 3, 4, 5], 2))
