#include<stdio.h>
int main(){
  int scores[3] = {0};
  printf("Enter a score");
  scanf("%d ", &scores[0]);
  printf("Enter a score");
  scanf("%d ", &scores[1]);
  printf("Enter a score");
  scanf("%d ", &scores[3]);





  for(int i = 0; i < 3; i++){
    printf("%d ", scores[i]);
  }

  return 0;
}
