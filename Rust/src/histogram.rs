// https://www.codewars.com/kata/59f44c7bd4b36946fd000052/rust

pub fn hist(s: &str) -> String
{
	let mut strings: Vec<String> = vec![];
	for letter in ['u', 'w', 'x', 'z']
	{
		let count = s.matches(letter).count();
		if count < 1
		{
			continue;
		}
		let string = format!("{0}  {1:<5} {2}", letter, count, "*".repeat(count));
		strings.push(string);
	}
	return strings.join("\n");
}
