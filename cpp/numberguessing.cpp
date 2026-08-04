#include <iostream>
int main() {
  int guess = 0;
  int tries = 0;
  int min = 1;
  int max = 100;

  srand(time(NULL));

  int answer = (rand() % (max - min + 1)) + min;

  std::cout << "NUMBER GUESSINZG GAME\n";
  do {
    std::cout << "guess the number between" << min << "and" << max << ":";
    std::cin >> guess;
    tries++;
    if (guess < answer) {
      std::cout << "TOO LOW\n";
    } else if (guess > answer) {
      std::cout << "TOO HIGH\n";
    } else {
      std::cout << "CORRECT!\n";
    }
  } while (guess != answer);

  std::cout << "The answer is " << answer << '\n';
  std::cout << "Tries: " << tries;

  return 0;
}
