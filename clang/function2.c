#include<stdio.h>
#include<string.h>
void happyBirthday(char name[], int age){
  printf("happy birthday to you");
  printf("happy birthday to you");
  printf("happy birthday dear %s", name);
  printf("happy birthday to you");
  printf("you are %d yo", age);
}
int main(){
  char name[50] = "";
  int age = 0;

  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin);
  name[strlen(name) - 1] = '\0';

  printf("Enter yoru age: ");
  scanf("%d", &age);

  happyBirthday(name, age);

  return 0;
}
