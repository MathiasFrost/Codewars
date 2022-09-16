// https://www.codewars.com/kata/59f44c7bd4b36946fd000052/java

package codewars;

import java.util.ArrayList;
import java.util.LinkedHashMap;

public class Histogram
{
	public static String Hist(String s)
	{
		LinkedHashMap<Character, Integer> count = new LinkedHashMap<>();
		for (Character letter : s.toCharArray())
		{
			Integer val = count.get(letter);
			if (val == null) count.put(letter, 1);
			else count.replace(letter, val + 1);
		}

		ArrayList<String> res = new ArrayList<>();
		for (Character letter : "uwxz".toCharArray())
		{
			Integer val = count.get(letter);
			if (val != null && val > 0)
			{
				String num = String.format("%-6d", val);
				String stars = "*".repeat(val);
				res.add(String.format("%s  %s%s", letter, num, stars));
			}
		}
		return String.join("\n", res);
	}
}
