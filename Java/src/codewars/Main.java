package codewars;

public class Main
{
	public static void main(String[] args)
	{
		System.out.println("Codewars java");

		String hist = "tpwaemuqxdmwqbqrjbeosjnejqorxdozsxnrgpgqkeihqwybzyymqeazfkyiucesxwutgszbenzvgxibxrlvmzihcb";
		System.out.println(Histogram.Hist(hist));

		StringBuilder json = new StringBuilder("[");
		var beggars = Beggars.beggars(new int[]{1, 2, 3, 4, 5}, 2);
		for (int beggar : beggars)
		{
			json.append(beggar).append(", ");
		}
		json.append(']');
		System.out.println(json);
	}
}
