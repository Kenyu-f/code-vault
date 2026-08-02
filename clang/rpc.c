#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice, int computerChoice);
int main(){
  srand(time(NULL));
  printf("Rock scissors papers");
  int userChoice = getUserChoice();
  int computerChoice = getComputerChoice();

  printf("%d", computerChoice);
  return 0;
}
int getComputerChoice(){
  return (rand() % 3) + 1;
}
int getUserChoice(){

}
void checkWinner(int userChoice, int computerChoice){

}
