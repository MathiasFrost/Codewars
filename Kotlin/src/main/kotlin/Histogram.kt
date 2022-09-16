object Histogram
{
	fun hist(s: String): String
	{
		val count = "abcdefghijklmnopqrstuvwxyz".associate { letter -> Pair(letter, 0) }.toMutableMap()
		for (letter in s)
		{
			count[letter] = count[letter]!!.plus(1)
		}
		val res = mutableListOf<String>()
		for (letter in "uwxz")
		{
			if (count[letter]!! > 0)
			{
				val num = "%-6d".format(count[letter])
				val stars = "*".repeat(count[letter]!!)
				res.add("$letter  $num$stars")
			}
		}

		return res.joinToString("\n")
	}
}
