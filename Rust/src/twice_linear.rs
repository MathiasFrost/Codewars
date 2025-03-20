use std::collections::HashSet;

pub fn dbl_linear(n: u32) -> u32 {
    let mut ints: HashSet<u32> = vec![1].into_iter().collect();
    for _i in 1..n {
        let min = ints.iter().next().unwrap().clone();
        ints.remove(&min);
        ints.insert(min * 2 + 1);
        ints.insert(min * 3 + 1);

        let mut sorted_elements: Vec<_> = ints.into_iter().collect();
        sorted_elements.sort();
    }

    *ints.iter().next().unwrap()
}
