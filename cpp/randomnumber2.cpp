#include <iostream>
#include <cstdlib>
#include <ctime>
int main() {
    int count, min, max;

    std::cout << "生成する回数を入力してください: ";
    std::cin >> count;

    std::cout << "最小値を入力してください: ";
    std::cin >> min;

    std::cout << "最大値を入力してください: ";
    std::cin >> max;

    if (min > max) {
        std::cout << "エラー: 最小値は最大値以下にしてください。" << std::endl;
        return 1;
    }

    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int range = max - min + 1;

    std::cout << "\n結果:" << std::endl;
    for (int i = 0; i < count; ++i) {
        int random_value = min + (std::rand() % range);
        
        std::cout << random_value << (i == count - 1 ? "" : ", ");
    }
    std::cout << std::endl;

    return 0;
}

