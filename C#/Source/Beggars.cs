// https://www.codewars.com/kata/59590976838112bfea0000fa/csharp

namespace CSharp;

public static class Beggars
{
	public static int[] Get(IReadOnlyList<int> values, int n)
	{
		var arr = new List<int>(n);
		for (var i = 0; i < n; i++)
		{
			var res = 0;
			for (int j = i; j < values.Count; j += n) res += values[j];
			arr.Add(res);
		}

		return arr.ToArray();
	}
}
