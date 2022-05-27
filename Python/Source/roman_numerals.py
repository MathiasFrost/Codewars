# https://www.codewars.com/kata/51b66044bce5799a7f000003/csharp

from dataclasses import dataclass


@dataclass
class RomanNumber:
    letter: str
    number: int


class RomanNumerals:
    
    @staticmethod
    def to_roman(val):
        i = 0
        ret = ""
        while val > 0:
            if val >= RomanNumerals.__roman_numbers[i].number:
                ret = ret + RomanNumerals.__roman_numbers[i].letter
                val = val - RomanNumerals.__roman_numbers[i].number
            else:
                i = i + 1
        return ret
    
    @staticmethod
    def from_roman(roman_num):
        ret = 0
        i = 0
        while len(roman_num):
            if roman_num.startswith(RomanNumerals.__roman_numbers[i].letter):
                ret = ret + RomanNumerals.__roman_numbers[i].number
                roman_num = roman_num[len(RomanNumerals.__roman_numbers[i].letter):]
            else:
                i = i + 1
        return ret
    
    __roman_numbers = [
        RomanNumber("M", 1000),
        RomanNumber("CM", 900),
        RomanNumber("D", 500),
        RomanNumber("CD", 400),
        RomanNumber("C", 100),
        RomanNumber("XC", 90),
        RomanNumber("L", 50),
        RomanNumber("XL", 40),
        RomanNumber("X", 10),
        RomanNumber("IX", 9),
        RomanNumber("V", 5),
        RomanNumber("IV", 4),
        RomanNumber("I", 1),
    ]
