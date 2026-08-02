#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int guess = 0;
  int tries = 0;
  int min = 1;
  int max = 100;
  int answer = (rand() + (max - min + 1)) + min;

  pirntf("NUMBER GUESSING GAME!");
  do{
    printf("Guess the number between %d -- %d", min, max);
    scanf("%d", %guess);
    tries++;
    if(guess < answer){
      printf("your guess is less than answer");
    }
    else if(guess > answer){
      printf("your guess is greater than answer");
    }
    else{
      printf("CORRECT");
    }
    }

  }while(guess != answer);
  printf("The answer is %d", answer);
  printf("Tries: %d", tries);
}

