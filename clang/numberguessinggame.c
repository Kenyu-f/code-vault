#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 100;

    // 乱数の初期化（毎回違う数字にするため）
    srand(time(NULL)); 
    // 正しい乱数の範囲指定の計算式
    int answer = (rand() % (max - min + 1)) + min; 

    // タイポの修正
    printf("NUMBER GUESSING GAME!\n"); 

    do {
        // 見やすさのため末尾にコロンと改行を追加
        printf("Guess the number between %d -- %d: ", min, max); 
        // %guess ではなく &guess に修正
        scanf("%d", &guess); 
        tries++;

        if (guess < answer) {
            printf("your guess is less than answer\n");
        } else if (guess > answer) {
            printf("your guess is greater than answer\n");
        } else {
            printf("CORRECT\n");
        }
    // whileの閉じカッコの位置をdo-whileの末尾に修正
    } while (guess != answer); 

    printf("The answer is %d\n", answer);
    printf("Tries: %d\n", tries);

    return 0;
}

