fn main(){
    let number_slices: &[i32] = &[1,2,3,4,5];
    println!("{:?}", number_slices);
    let animal_slices: &[&str] = &["Lion", "hyena", "elephant"];
    println!("{:?}", animal_slices);
}
