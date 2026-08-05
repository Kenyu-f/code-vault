fn main(){
    println!("Enter something:");
    let mut word = String::new();
    std::io::stdin().read_line(&mut word).ok();
    let answer = word.trim().to_string();
    println!("{}", answer);
}
