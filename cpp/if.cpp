#include<iostream>
int main(){
  int age;
  std::cout << "Enter your age";
  std::cin >> age;
  if(age >= 18){
    std::cout << "Welcome to the website!";
  }
  else if(age < 18){
    std::cout << "You are not old enough";

  }
  return 0;
}
