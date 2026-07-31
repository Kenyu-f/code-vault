#include<stdio.h>
#include<math.h>
int main(){

  float celsius = 0.0f;
  float kelvin = 0.0f;
  float ndiffer = -273.15;
  float pdiffer = 273.15;
  int choice = 0;
  printf("Which whould you choose?\n");
  printf("1. kelvin to celsius\n");
  printf("2. celsius to kelvin\n");
  printf("Enter your choice:\n");
  scanf("%d", &choice);

  if(choice == 1){
    printf("What is the value of kelvin?:");
    scanf("%f", &kelvin);
    celsius = kelvin + ndiffer;
    printf("Celsius is %f", celsius);
  }
  if(choice == 2){
    printf("What is the value of celsius?:");
    scanf("%f", &celsius);
    kelvin = celsius + pdiffer;
    printf("Kelvin is %f", kelvin);
  }
  return 0;
}
