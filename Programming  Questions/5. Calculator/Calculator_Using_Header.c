#include<stdio.h>
#include "calculator.h"
int main() 
{
   char operator;
   double num1, num2, num3, num4, num5, num6, num7;
   printf("Developed by HRITHIK SAGAR on 12th June 2021")
   printf("Enter an operator (+, -, *, /, !): ");
   scanf("%c", &operator);
   printf("Enter two operands: ");
   scanf("%lf %lf", &num1, &num2);

   switch (operator) {
   case '+':
      num3 = add(num1, num2);
      printf("Addition of Two numbers : %d", num3);
      break;
   case '-':
      num4 = sub(num1, num2);
      printf("Subtraction of Two numbers : %d", num4);
      break;
   case '*':
      num5 = mul(num1, num2);
      printf("Multiplication of Two numbers : %d", num5);
      break;
   case '/':
      num6 = div(num1, num2);
      printf("Addition of Two numbers : %d", num6);
      break;
   case '!':
      num7 = factorial(num1);
      printf("Factorial of your number is : %d", num7);
      break;
        // operator doesn't match any case constant
   default:
      printf("Error! operator is not correct");
   }
   return 0;
}