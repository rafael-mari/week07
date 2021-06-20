/********************************************************
 * Ex04 -- Added taxes. *
 * *
 * Author: Rafael Marí. *
 * *
 * Purpose: Calculate the amount of money after taxes and round it to the nearest penny. *
 * *
 * Usage: *
 * Run the program, enter the amount of money and the new amount after taxes and rounded to the nearest penny appears. *
 ********************************************************/

#include <stdio.h>
#include <math.h>

int main(void) {
  float a; // the original ampunt of money
  float b; // the amount of money after taxes
  
  printf("Enter the original amount of money.\n"); //I ask for the amount of money
  scanf("%f",&a); // I read the amount provided

  b=a*1.08; //I do the calculations

  printf("The amount of money after taxes is $%.2f",b); //I print the new value

  return 0;
}
