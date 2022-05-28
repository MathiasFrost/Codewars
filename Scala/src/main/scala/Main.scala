object Main
{
	def main(args: Array[String]): Unit =
	{
		println("Codewars Scala")
		
		val hist = "tpwaemuqxdmwqbqrjbeosjnejqorxdozsxnrgpgqkeihqwybzyymqeazfkyiucesxwutgszbenzvgxibxrlvmzihcb"
		println(Histogram.hist(hist))
		
		println(Beggars.beggars(List(1, 2, 3, 4, 5), 2))
	}
}