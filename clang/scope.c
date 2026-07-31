#include<stdio.h>

int add(int x, int y){
  return x + y;
}
int main(){
  int result = add(3, 4);
  printf("%d", result);
  return 0;
}
