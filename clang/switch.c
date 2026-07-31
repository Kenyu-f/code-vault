#include<stdio.h>
int main(){
  int dayOfWeek = 1;
  printf("Enter a day of week(1-7): ");
  scanf("%d", &dayOfWeek);
  switch(dayOfWeek){
    case 1:
    printf("Monday");
    break;

    case 2:
    printf("Tuesday");
    break;

    case 3:
    printf("Wednesday");
    break;

    case 4:
    printf("Thursday");
    break;

    case 5:
    printf("Friday");
    break;

    case 6:
    printf("Saturday");
    break;

    case 7:
    printf("Sunday");
    break;

    default:
    printf("Select a number 1 to 7:");

  }
  return 0;
}
