#include<stdio.h>

int main(){
  int number = 1;
  do{
    printf("Enter a number:");
    scanf("%d", &number);
  }while(number <= 0);

  return 0;
}
