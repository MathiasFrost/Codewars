const STATES: &[(&str, &str)] = &[
    ("AZ", "Arizona"), ("CA", "California"), ("ID", "Idaho"), ("IN", "Indiana"), 
    ("MA", "Massachusetts"), ("OK", "Oklahoma"), ("PA", "Pennsylvania"), ("VA", "Virginia")
];

pub fn by_state(str: &str) -> String {
    let mut res = String::new();
    for (a, s) in STATES {
        let mut lines : Vec<_> = str.lines().filter(|l| l.ends_with(a)).collect();
        if !lines.is_empty() {
            lines.sort();
            if !res.is_empty() {
                res += "\n ";
            }
            res += s;
            for l in lines {
                res += "\n..... ";
                res += &l.replace(",","").replace(a, s);
            }
        }
    }
    res
}