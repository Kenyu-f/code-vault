#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 関数プロトタイプ宣言
int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice, int computerChoice);

int main() {
    // 乱数のシード（種）を現在時刻で初期化
    srand(time(NULL));

    printf("*************************\n");
    printf("  ROCK PAPER SCISSORS!   \n");
    printf("*************************\n");

    // プレイヤーとコンピュータの手を格納する変数
    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();

    // 選択された手に応じてテキストを表示（プレイヤー）
    switch (userChoice) {
        case 1: printf("You chose: ROCK\n"); break;
        case 2: printf("You chose: PAPER\n"); break;
        case 3: printf("You chose: SCISSORS\n"); break;
    }

    // 選択された手に応じてテキストを表示（コンピュータ）
    switch (computerChoice) {
        case 1: printf("Computer chose: ROCK\n"); break;
        case 2: printf("Computer chose: PAPER\n"); break;
        case 3: printf("Computer chose: SCISSORS\n"); break;
    }

    // 勝敗の判定
    checkWinner(userChoice, computerChoice);

    return 0;
}

// コンピュータの手をランダムに決定する関数 (1:グー, 2:パー, 3:チョキ)
int getComputerChoice() {
    // rand() % 3 は 0〜2 の範囲になるため、+1 して 1〜3 にする
    return (rand() % 3) + 1;
}

// ユーザーに入力を促す関数（1〜3の正しい入力があるまでループ）
int getUserChoice() {
    int choice = 0;

    do {
        printf("Choose an option:\n");
        printf("1. ROCK\n");
        printf("2. PAPER\n");
        printf("3. SCISSORS\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("\n");
        
        // 1〜3以外の入力があった場合はループを継続
    } while (choice < 1 || choice > 3);

    return choice;
}

// 勝敗を判定して結果を出力する関数
void checkWinner(int userChoice, int computerChoice) {
    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } 
    // プレイヤーが勝つ3つのパターンを論理演算子(|| と &&)でまとめる
    else if ((userChoice == 1 && computerChoice == 3) || // グー vs チョキ
             (userChoice == 2 && computerChoice == 1) || // パー vs グー
             (userChoice == 3 && computerChoice == 2))   // チョキ vs パー
    {
        printf("You win!\n");
    } 
    else {
        printf("You lose!\n");
    }
}

