use std::io::*;

fn main() {
    let mut buffer = String::new();
    let mut flag = false;
    stdin().read_line(&mut buffer).expect("err");
    let str = buffer.trim().chars().collect::<Vec<char>>();


    for i in 0..(str.len()/2) {
        if str[i] != str[str.len()-1-i] {
            flag = true;
        }
    }

    if flag {
        println!("0");
    } else {
        println!("1");
    }
}
