use std::collections::HashMap;

fn main() {
    let mut map:HashMap<String, usize> = HashMap::new(); 

    let mut a = String::new();
    let mut b = String::new();
    let mut c = String::new();
    let mut d = String::new();
    let stdin = std::io::stdin();
    stdin.read_line(&mut a).unwrap();
    stdin.read_line(&mut b).unwrap();
    stdin.read_line(&mut c).unwrap();
    stdin.read_line(&mut d).unwrap();
    
    let have = b.split_whitespace().map(|x|x.trim());
    let check = d.split_whitespace().map(|x|x.trim());

    for (i,val) in have.enumerate(){
        map.insert(val.to_owned(), i);
    }

    for i in check{
        let t = i.to_owned();
        match map.get(&t){
            Some(_x) => print!("{} ", 1),
            None => print!("{} ", 0),
        }
    }
}
