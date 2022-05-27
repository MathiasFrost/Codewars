// https://www.codewars.com/kata/59590976838112bfea0000fa/rust

pub fn beggars(values: &[u32], n: usize) -> Vec<u32>
{
	let mut arr: Vec<u32> = vec![];
	for i in 0..n
	{
		let mut res = 0;
		for j in (i..values.len()).step_by(n)
		{
			res += values[j];
		}
		arr.push(res.to_owned());
	}
	return arr;
}