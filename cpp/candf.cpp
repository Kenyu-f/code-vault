#include<iostream>
int main(){
  double temp;
  char unit;
  std::cout << "Tempreture converter";
  std::cout << "F means fahrenheit nad C means Celsius";
  std::cout << "What unit do you wanna convert?";
  std::cin >> unit;
  if(unit == 'F' || unit == 'f'){
    std::cout << "Enter the tempreture in celsius";
    std::cin >> temp;
    temp = (1.8 * temp) + 32.0;
    std::cout << "tempreture is " << temp << "F";
  }
  else if(unit == 'C' || unit == 'c'){
    std::cout << "Enter the tempreture in fahrenheit";
    std::cin >> temp;
    temp = (temp - 32) / 1.8;
    std::cout << "The tempreture is " << temp << "C";
  }
  return 0;
}
