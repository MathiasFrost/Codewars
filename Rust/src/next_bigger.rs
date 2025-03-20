pub fn next_bigger_number(n: u64) -> Option<u64> {
    let mut digits: Vec<u32> = n
        .to_string()
        .chars()
        .map(|c| c.to_digit(10).unwrap())
        .collect();

    let pivot = (1..digits.len())
        .rev()
        .find(|&i| digits[i] > digits[i - 1])?;

    let swap_index = (pivot..digits.len())
        .rev()
        .find(|&i| digits[i] > digits[pivot - 1])
        .unwrap();

    digits.swap(pivot - 1, swap_index);
    digits[pivot..].sort();
    digits
        .iter()
        .map(|&d| d.to_string())
        .collect::<String>()
        .parse::<u64>()
        .ok()
}
