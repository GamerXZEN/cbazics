#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#include <inttypes.h>
#include <cinttypes>

int main()
{
    long double num1; 
    long double num2;
    char op;
    int ur = 4;
    while(ur <= 4)
    {
    printf("Enter your first number: ");
    scanf("%lf", &num1);
    int cond = 0;
    while(cond < 1)
    {
      if(isdigit(num1))
      {
       cond = 2;
      } 
      else 
      {
        printf("You entered a non numeric value. Please enter a numeric value:");
        scanf("%lf", &num1); 
      }
    }
    printf("Enter an operator:");
    scanf(" %c", &op);
    printf("Enter your second number:");
    scanf("%lf", &num2);
    if(op == '+')
    {
        printf("Your answer is ");
        printf("%f\n", num1 + num2);
    }
    else if(op == '-')
    {
        printf("Your answer is ");
        printf("%f\n", num1 - num2);
    }
    else if(op == '/')
    {
        printf("Your answer is ");
        printf("%f\n", num1 / num2);
    }
    else if(op == '*')
    {
        printf("Your answer is ");
        printf("%f\n", num1 * num2);
    }
    else 
    {
        printf("\nInvalid operator\n");
    }
    }
    return 0;
}