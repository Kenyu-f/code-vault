#include<stdio.h>

int main(){

  int number = 0;
  while(number <= 0){
    printf("Enter a number greater than 0");
    scanf("%d", &number);
  }
  return 0;
}
