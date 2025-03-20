pub fn play_pass(s: &str, n: u32) -> String {
    s.chars()
        .map(|c| shift_char(c, n as u8))
        .map(|c| complement_by_9(c))
        .enumerate()
        .map(|(i, c)| down_case_odd(c, i))
        .collect::<Vec<char>>()
        .into_iter()
        .rev()
        .collect()
}

fn shift_char(input: char, n: u8) -> char {
    if input.is_lowercase() {
        (b'a' + (input as u8 - b'a' + n) % 26) as char
    } else if input.is_uppercase() {
        (b'A' + (input as u8 - b'A' + n) % 26) as char
    } else {
        input
    }
}

fn complement_by_9(input: char) -> char {
    if input.is_ascii_digit() {
        (b'9' - input as u8 + b'0') as char
    } else {
        input
    }
}

fn down_case_odd(input: char, i: usize) -> char {
    if i % 2 != 0 {
        input.to_lowercase().next().unwrap()
    } else {
        input
    }
}
