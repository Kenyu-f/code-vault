#include<iostream>
int main(){
  int grade;
  std::cout << "enter your grade:";
  std::cin >> grade;

  grade >= 60 ? std::cout << "Your pass!" : std::cout << "You failed!";
  return 0;
}
