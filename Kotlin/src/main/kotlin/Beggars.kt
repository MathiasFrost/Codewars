object Beggars
{
	fun beggars(values: List<Int>, n: Int): List<Int>
	{
		return List(n) { index ->
			var res = 0
			for (j in index until values.size step n)
			{
				res += values[j]
			}
			return@List res
		}
	}
}
