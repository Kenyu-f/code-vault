#include<iostream>
int main(){
  int temp;
  std::cout << "enter the temp:";
  std::cin >> temp;
  if(temp > 0 && temp < 30){
    std::cout <<"The temp is good";
  }
  else{
    std::cout << "The temp is bad";
  }
  return 0;
}
