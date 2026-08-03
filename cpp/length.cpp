#include <iostream>
int main() {
  std::string name;
  std::cout << "Enter your favorite gf";
  std::getline(std::cin, name);
  if (name.length() > 12) {
    std::cout << "the name cant be greater than 12";
  } else {
    std::cout << "What a cutie girlfriend!";
  }
  return 0;
}
