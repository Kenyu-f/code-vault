fn main(){
    hello();
    tell_height(170);
    human_id("KenyuF", 17);
}
fn hello(){
    println!("Hello world");
}
fn tell_height(height: u32){
    println!("My height is {}cm", height);
}
fn human_id(name: &str, age: u32){
    println!("My name is {}, I'm {} years old", name,age);
}
