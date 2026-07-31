#include<stdio.h>
#include<stdbool.h>

int main(){
  float price = 10.00;
  bool isStudent = true; //10% discount
  bool isSenior = false; //20% discount

  if(isStudent){
    printf("You can get a student discount of 10 percent\n");
    price *= 0.9;
    printf("Your price is %.2f", price);
  }
  if(isSenior){
    printf("You can get a senior discount of 20 percent\n");
    price *= 0.8;
    printf("Your price is %.2f", price);
  }
  return 0;
}
