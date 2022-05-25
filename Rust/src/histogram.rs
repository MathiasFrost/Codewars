pub fn hist(s: &str) -> String {
	let mut strings: Vec<String> = vec![];
	for letter in ['u', 'w', 'x', 'z'] {
		let count = s.matches(letter).count();
		if count < 1 {
			continue;
		}
		let string = format!("{0}  {1:<5} {2}", letter, count, "*".repeat(count));
		strings.push(string);
	}
	return strings.join("\n");
}
