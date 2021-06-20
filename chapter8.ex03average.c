/********************************************************
 * Ex8.3 -- Average *
 * *
 * Author: Rafael Marí. *
 * *
 * Purpose: Compute a program displays the average of n numbers. *
 * *
 * Usage: *
 * Run the program, enter the amount of numbers, enter number as required and the final average appears. *
 ********************************************************/

#include <stdio.h>
#include <math.h>

int main(void){
  int x;
  int i;
  float n;
  float number=0;
  float average;

  printf("Enter the amount of numbers to get their average.\n"); //I ask for the amount of numbers
  scanf("%d",&x); //I read the number

  for (i=1;i<=x;i++) //I create a loop that won't stop until it reaches the amount of numbers the user entered before
  {
    printf("Enter the number %d \n",i); //I ask for the numbers
    scanf("%f",&n); // I read them
    number=number+n; //I sum the numbers
    if (i==x){
      break;
    }
   }
   average=number/x; //I get the average by dividing the sum by the amount of numbers the user entered

    printf("The final average is equal to %.3f.",average);//The .3 is to round to 3 decimals
    
  return 0;
}
