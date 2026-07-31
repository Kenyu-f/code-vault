#include<stdio.h>
#include<stdbool.h>

void hello(char name[], int age);
bool ageCheck(int age);

int main(){
  hello("KenyuF", 17);
  if(ageCheck(17)){
    printf("You are old enough");
  }
  else{
    printf("You are too young");
  }
  return 0;
}

void hello(char name[], int age){
  printf("Hello %s", name);
  printf("You are %d years old", age);
}

bool ageCheck(int age){
  if(age >= 16){
    return true;
  }
  else{
    return false;
  }
// return age >= 16; is enough.
}
