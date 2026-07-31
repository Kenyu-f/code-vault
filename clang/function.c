#include<stdio.h>
void happyBirthday(char name[], int age){
  printf("Happy birthday to you");
  printf("happy birthday to you");
  printf("happy birthday dear %s", name);
  printf("happy birthday to you");
  printf("you are %d yo", age);
}
int main(){
  char name[] = "Kenyu";
  int age = 17;
  happyBirthday(name, age);
  return 0;
}
