#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  srand(time(NULL));
  int min = 1;
  int max = 5;
  int randomNum = (rand() % max) + min;
  printf("%d", randomNum);
  return 0;
}
// int main(){
//   printf("%d ", rand());
//  return 0;
//}
