mod histogram;
mod beggars;
mod by_state;
mod play_pass;
mod decimal_time_conversion;
mod add_letters;
mod next_bigger;
mod twice_linear;

fn main()
{
	println!("Codewars Rust");
	
	println!("{0}", histogram::hist("tpwaemuqxdmwqbqrjbeosjnejqorxdozsxnrgpgqkeihqwybzyymqeazfkyiucesxwutgszbenzvgxibxrlvmzihcb"));
	
	let arr = beggars::beggars(&[1, 2, 3, 4, 5], 2);
	let mut strings: Vec<String> = vec![];
	for i in arr
	{
		strings.push(i.to_string());
	}
	
	println!("[{0}]", strings.join(", "));

	println!("{0}", by_state::by_state("John Pulsett, 321 King Street, Palmouth MA\nAlisa Gord, 22 Prin Broadway, Georges VA\nOreste Thulas, 11354 East Bridge Road, Pensa OK\nPerry Falpas, 420 Land Road, Beaver Halls PA\nErica Adamson, 200 Station Road, Westbury MA\nPaulo Sims, 8A River Street, Richmond VA\nAnn Wildon, 334 Shore Parkway, Hill View CA\nAl Carpenter, 730 3rd Street, Boston MA"));

	println!("{}", play_pass::play_pass("I Love You!!!", 2));

	println!("{}", add_letters::add_letters(Vec::from(['a', 'b', 'c'])))
}
