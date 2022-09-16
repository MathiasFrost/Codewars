class Histogram
{
	static String Hist(String s)
	{
		LinkedHashMap<String, Integer> count = []
		for (letter in s)
			count[letter] = count[letter] == null ? 1 : count[letter] + 1

		ArrayList<String> res = []
		for (letter in "uwxz")
		{
			if (count[letter] > 0)
			{
				String num = sprintf("%-6d", count[letter])
				String stars = '*' * count[letter]
				res.add(sprintf("%s  %s%s", letter, num, stars))
			}
		}
		return String.join('\n', res)
	}
}
