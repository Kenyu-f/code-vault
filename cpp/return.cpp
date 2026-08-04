#include <iostream>
double square(double length);
int main() {
  double length;
  std::cout << "Enter the length:";
  std::cin >> length;
  double area = square(length);
  std::cout << area;
  return 0;
}
double square(double length) { return length * length; }
