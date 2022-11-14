/******************************************************************************
filename    fibonacci.c
author      Joey Laybourn
DP email    j.laybourn@digipen.edu
course      CS120
section     A
lab         3
due date    10/3/2017

Brief Description:
This program prompts the user to input 2-42, then output that many fibonacci
numbers.  

******************************************************************************/
#include <stdio.h> /*scanf, printf*/

int main(void)
{
  int input;/*amount of fibonacci numbers printed*/
  int fibonacci1 = 0;/*the third from current fibonacci number*/
  int fibonacci2 = 1;/*the second from current fibonacci number*/
  int i;/*loop variable*/

  do/**/
  {
    /*prompts the user to input the amount of fibonacci numbers to print*/
    printf("Enter the Fibonacci number to calculate.\n");
    printf("The number must be an integer between 2 and 46. ");
    printf("(Enter 1 to quit): ");
    scanf("%i", &input);/*gets the amount of fibonacci numbers to print*/
  } 
  while (input < 1 || input > 46);
  
  if (input == 1)/*ends the program if the user presses 1*/
    return 0;

  else
  {
    /*prints the first five lines of output*/
    printf("\n           Fibonacci        Fibonacci\n");
    printf(" N           number          quotient\n");
    printf("-------------------------------------\n");
    printf(" 0             0                  N/A\n");
    printf(" 1             1                  N/A\n");

    /*runs the program the amount of times the user specified*/
    for (i = 2; i <= input; i++)
    {
      /*adds the last 2 numbers of the fibonacci sequence*/
      int fibonacci_sum = fibonacci1 + fibonacci2;

      /*divides the current number by the last fibonacci number*/
      double fibonacci_quotient = (double)fibonacci_sum / fibonacci2;

      fibonacci1 = fibonacci2;/*makes the last number the second to last*/
      fibonacci2 = fibonacci_sum;/*makes the current number the last*/

      /*prints out the index, the current fibonacci number, and the ratio*/
      printf("%2i %13i %20.16f\n", i, fibonacci_sum, fibonacci_quotient);
    }
  }
  return 0;
}