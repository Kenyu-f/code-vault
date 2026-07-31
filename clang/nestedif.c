#include<stdio.h>
#include<stdbool.h>
int main(){
  float price = 10.00;
  bool isStudent = true;
  bool isSenior = true;

  if(isStudent){
    if(isSenior){
      printf("You got a student discount of 10 percent\n");
      printf("You got a senior discount of 20 percent\n");
      price *= 0.7;
    }
    else{
      printf("You got a student discount of 10 percent\b");
      price *= 0.9;
    }

  }
  
  else{
    if(isSenior){
      printf("You got a senior discount of 20 percent\b");
      price *= 0.8;

    }
  }

  printf("The price of a ticket is %.2f\n", price);
  return 0;
}
