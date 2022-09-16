// https://www.codewars.com/kata/59590976838112bfea0000fa/swift

struct Beggars
{
	static func beggars(_ values: [Int], _ n: Int) -> [Int]
	{
		var arr: [Int] = []
		for i in stride(from: 0, to: n, by: 1) 
		{
			var res = 0
			for j in stride(from: i, to: values.count, by: n)
			{
				res += values[j]
			}
			arr.append(res)
		}
		return arr
	}
}
