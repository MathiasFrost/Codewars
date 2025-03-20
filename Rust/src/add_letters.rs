pub fn add_letters(letters: Vec<char>) -> char {
    letters
        .into_iter()
        .reduce(|acc, curr| ((((acc as u8 - 97) + (curr as u8 - 96)) % 26) + 97) as char)
        .unwrap_or('z')
}
