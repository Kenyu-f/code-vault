#include<stdio.h>
int main(){

  char operator = '\0';
  double num1 = 0.0;
  double num2 = 0.0;
  double result = 0.0;

  printf("Enter the first number");
  scanf("%lf", &num1);

  printf("Choose the operator (+, -, *, /): ");
  scanf(" %c", &operator);

  printf("Enter the second number");
  scanf("%lf", &num2);

  switch(operator){
    case '+':
    result = num1 + num2;
    break;

    case '-':
    result = num1 - num2;
    break;

    case '*':
    result = num1 * num2;
    break;

    case '/':
    result = num1 / num2;
    break;

    default:
    printf("Invalid operator\n");
    return 1;
  }

   printf("This is the result %.2f", result);
  return 0;
}
