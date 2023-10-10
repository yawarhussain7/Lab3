/**
 * Author:  Yawar Hussain
 * Date:  06/10/2023
 *
 * This programs provides basic calculator functionality
 * allowing a user to enter two operands and to compute
 * various calculated values.
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int min(int x, int y);
int main(int argc, char **argv)
{

  double a, b, result;
  int choice;

  printf("Enter operand a: ");
  scanf("%lf", &a);

  printf("Enter operand b: ");
  scanf("%lf", &b);

  printf("Enter operation:\n");
  printf("(1) Addition\n");
  printf("(2) Subtraction\n");
  printf("(3) Multiplication\n");
  printf("(4) Division\n");
  printf("(5) Minimum\n");
  printf("(6) log_a(b)\n");
  scanf("%d", &choice);

  if (choice == 1)
  {
    printf("%f", a + b);
  }
  else if (choice == 2)
  {
    result = a - b;
    printf("%f", result);
  }
  else if (choice == 3)
  {
    result = a * b;
    printf("%f", result);
  }
  else if (choice == 4)
  {
    if (b > 0)
    {
      result = a / b;
      printf("%f", result);
    }
    else
    {
      printf("The value of b is zero \n");
    }
  }
  else if (choice == 5)
  {
    result = min(a, b);
    printf("%f", result);
  }
  else if (choice == 6)
  {
    if (a > 0 && b > 0)
    {
      result = (log(a) / log(b));
      printf("%f", result);
    }
    else
      printf("Error You Enter negative value \n");
  }
  else
  {
    printf("Please input a valid operator next time");
  }

  return 0;
}

int min(int x, int y)
{
  int z = (x < y) ? x : y;
  return z;
}