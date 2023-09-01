// https://www.codewars.com/kata/59f44c7bd4b36946fd000052/csharp

namespace CSharp;

public static class Histogram
{
	public static string Hist(string s)
	{
		Dictionary<char, short> count = "abcdefghijklmnopqrstuvwxyz".ToDictionary<char, char, short>(c => c, _ => 0);
		foreach (char letter in s) count[letter]++;

		IEnumerable<string> strings = from letter in "uwxz"
			let num = count[letter]
			where num > 0
			let str = $"{letter}  {num,-6}"
			select str + new string('*', num);

		return String.Join('\n', strings);
	}
}
