fn main(){
    let numbers: [i32; 5] = [1,2,3,4,5];
    println!("Number array: {:?}", numbers);
    let fruits: [&str; 3] = ["apple", "banana", "orange"];
    println!("Fruits array: {}", fruits[1])

}
