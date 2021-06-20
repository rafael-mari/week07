/********************************************************
 * Ex8.2 -- Sum of resistors *
 * *
 * Author: Rafael Marí. *
 * *
 * Purpose: Compute a program displays the sum of n number of resistors and prints the final resistance. *
 * *
 * Usage: *
 * Run the program, enter the number of resistors, enter each value in ohms and the final resistance appears. *
 ********************************************************/

#include <stdio.h>
#include <math.h>

int main(void){
  int x;
  int i;
  float n;
  float resistor=0;
  float resistance;

  printf("Enter the number of resistors to sum.\n"); //I ask for the number of resistors
  scanf("%d",&x); //I read the number

  for (i=1;i<=x;i++) //I create a loop that won't stop until it reaches the number of resistors the user entered before
  {
    printf("Enter the value in ohms of the resistor %d \n",i); //I ask for the resistors
    scanf("%f",&n); // I read them
    resistor=resistor+(1/n); //I sum the resistors
    if (i==x){
      break;
    }
   }
   resistance=1/resistor; //The final resistance is equal to dividing 1 between the sum of the resistors

    printf("The final resistance is equal to %.3f ohms.",resistance);//The .3 is to round to 3 decimals
    
  return 0;
}
