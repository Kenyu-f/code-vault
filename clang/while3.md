# `while3.c` のコード修正と解説

元のコードには、コンパイルエラーになるタイポや、ループが1回で強制終了してしまう構造上の問題がありました。以下に問題点と修正済みのコードをまとめます。

## 1. 見つかった間違い（修正点）

1. **`scanf`のフォーマット指定子の誤り**
   * ❌ 誤: `scanf(" &c", &response);`
   * ⭕️ 正: `scanf(" %c", &response);`
   * 文字を受け取るためのフォーマット指定子は `&c` ではなく `%c` です。（※コメントにある通り、改行文字などを読み飛ばすために `%c` の前にスペースを入れるのは大正解です！）
2. **変数名のスペルミス（タイポ）**
   * ❌ 誤: `isRrunning = false;` (Rが1つ多い)
   * ⭕️ 正: `isRunning = false;`
   * 最初に宣言した変数名 `isRunning` と完全に一致させる必要があります。
3. **終了処理が `while` ループの中に入っている（論理エラー）**
   * ❌ 誤: `printf("You exit the game");` と `return 0;` が `while` の `{ }` の中にある。
   * ⭕️ 正: `while` ループの `{ }` の**外（下）**に移動する。
   * 元のコードのままだと、Yを入力してもNを入力しても、1回目の処理が終わった直後に `return 0;` が実行され、プログラムが強制終了してしまいます。

---

## 2. 修正後の正しいコード

上記の問題を解決した正しいコードは以下の通りです。
（※最後のメッセージ出力時に改行 `\n` を追加して、ターミナルでの見栄えを良くしています）

```c
#include <stdio.h>
#include <stdbool.h>

int main() {
  bool isRunning = true;
  char response = '\0';

  while(isRunning) {
    printf("You are playing a game\n");
    printf("Do you wanna continue? (Y = yes N = no): ");
    
    // 修正1: &c を %c に変更
    scanf(" %c", &response); 

    if(response != 'Y') {
      // 修正2: isRrunning のスペルミスを修正
      isRunning = false; 
    }
  } // whileループはここまで

  // 修正3: ループを抜けた後の処理として外に配置
  printf("You exit the game\n");
  return 0;
}
