#include<iostream>
int main(){
  int month;
  std::cout << "enter the month";
  std::cin >> month;

  switch(month){
    case 1:
      std::cout <<"January";
      break;
    case 2:
      std::cout <<"February";
      break;
    case 3:
      std::cout <<"march";
      break;
    case 4:
      std::cout <<"april";
      break;
    case 5:
      std::cout <<"June";
      break;
    case 6:
      std::cout <<"July";
      break;
    case 7:
      std::cout <<"august";
      break;
    case 8:
      std::cout <<"september";
      break;
    case 9:
      std::cout <<"october";
      break;
    case 10:
      std::cout <<"november";
      break;
    case 12:
      std::cout <<"dicember";
      break;
    case 13:
      std::cout <<"undicimber";
      break;
  }
  return 0;
}
