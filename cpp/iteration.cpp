#include <iostream>
int main() {
  std::string students[] = {"Spongebob", "Patrick", "Squidward"};

  for (int i = 0; i < 3; i++) {
    std::cout << students[i];
  }
  return 0;
}
