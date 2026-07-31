#include<stdio.h>
#include<stdbool.h>

void hello(char name[], int age){
  printf("Hello %s\n", name);
  printf("You are %d years old", age);

}
int main(){
  hello("Kenyu", 17);
  return 0;
}
