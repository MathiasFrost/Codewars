// https://www.codewars.com/kata/59590976838112bfea0000fa/scala

object Beggars
{
	def beggars(values: List[Int], n: Int): List[Int] =
	{
		var arr: List[Int] = List()
		for (i <- 0 until n)
		{
			var res = 0
			for (j <- i until values.size by n)
			{
				res += values(j)
			}
			arr :+= res
		}
		
		arr
	}
}
