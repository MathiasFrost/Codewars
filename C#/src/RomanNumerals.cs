// https://www.codewars.com/kata/51b66044bce5799a7f000003/csharp

namespace CSharp;

public record struct RomanNumber(string Letter, int Number);

public static class RomanNumerals
{
	private static readonly IList<RomanNumber> RomanNumbers = new List<RomanNumber> {
			new("M" , 1000),
			new("CM",  900),
			new("D" ,  500),
			new("CD",  400),
			new("C" ,  100),
			new("XC",   90),
			new("L" ,   50),
			new("XL",   40),
			new("X" ,   10),
			new("IX",    9),
			new("V" ,    5),
			new("IV",    4),
			new("I" ,    1),
	};

	public static string ToRoman(int n)
	{
		var i = 0;
		var ret = "";
		while (n > 0)
		{
			if (n >= RomanNumbers[i].Number)
			{
				ret += RomanNumbers[i].Letter;
				n -= RomanNumbers[i].Number;
			}
			else
			{
				i++;
			}
		}
		return ret;
	}

	public static int FromRoman(string romanNumeral)
	{
		var ret = 0;
		var i = 0;
		while (romanNumeral.Length > 0)
		{
			if (romanNumeral.StartsWith(RomanNumbers[i].Letter))
			{
				ret += RomanNumbers[i].Number;
				romanNumeral = romanNumeral[RomanNumbers[i].Letter.Length..];
			}
			else
			{
				i++;
			}
		}
		return ret;
	}
}
