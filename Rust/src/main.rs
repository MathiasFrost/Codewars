mod histogram;
mod beggars;

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
}
