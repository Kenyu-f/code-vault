#include<stdio.h>
#include<stdbool.h>
int main(){
  bool isRunning = true;
  char response = '\0';

  while(isRunning){
    printf("You are playing a game");
    printf("Do you wanna continue? (Y = yes, N = no):");
    scanf(" %c", &response);
      if(response != 'Y'){
      isRunning = false;
    }
  }
  printf("You exit the game");
  return 0;
}
