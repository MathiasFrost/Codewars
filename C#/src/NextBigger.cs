// https://www.codewars.com/kata/55983863da40caa2c900004e/csharp

namespace CSharp;

public static class NextBigger
{
	public static long NextBiggerNumber(long n)
	{
		IList<char> digits = n.ToString().ToCharArray();
		int index = digits.Count - 1;

		// If a digit is greater than the previous, we can swap it
		while (index > 0 && digits[index] <= digits[index - 1])
		{
			index--;
		}

		// If there was none, it is already arranged in the highest possible combination
		if (index < 1)
		{
			return -1;
		}

		// Split the digits at the swappable number
		IEnumerable<char> left = digits.Take(index - 1);
		char mid = digits[index - 1];
		List<char> right = digits.Skip(index).ToList();

		// The number we want to swap is the one that is the smallest of those that are greater than mid
		char candidate = right.Where(num => num > mid).Min();

		// Swap the value of the first occurence of candidate with mid
		right[right.IndexOf(candidate)] = mid;
		mid = candidate;

		// Sort right side to be the smallest possible combination
		right.Sort((a, b) => a - b);
		return Int64.Parse(String.Join("", left.Concat(new[] { mid }).Concat(right)));
	}
}
