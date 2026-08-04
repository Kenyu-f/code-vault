#include <iostream>
void happyBirthday(std::string name, int age);
int main() {
  std::string name;
  std::cout << "Enter your name:";
  std::cin >> name;
  int age;
  std::cout << "Enter your age:";
  std::cin >> age;
  happyBirthday(name, age);
  return 0;
}
void happyBirthday(std::string name, int age) {
  std::cout << "Happy birthday to you\n";
  std::cout << "Happy birthday to you\n";
  std::cout << "Happy birthday dear " << name << '\n';
  std::cout << "Happy birthday to you\n";
  std::cout << "You are " << age << " years old\n";
}
