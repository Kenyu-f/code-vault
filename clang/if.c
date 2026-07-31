#include<stdio.h>
int main(){

  int number = 0;
  printf("Enter your favorite number:");
  scanf("%d", &number);

  if(number < 0){
    printf("Your number %d is less than 0", number);
  }
  if(number > 0){
    printf("Your number is greater than 0");
  }
  else;
    printf("Your number %d is 0", number);
  return 0;
}
