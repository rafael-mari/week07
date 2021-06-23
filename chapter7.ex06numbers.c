/********************************************************
 * Ex06 -- Positive and negative *
 * *
 * Author: Rafael Marí. *
 * *
 * Purpose: Compute a program displays the number of positive and negative numbers given a list of numbers. *
 * *
 * Usage: *
 * Run the program, enter the amount of numbers, enter the numbers as required and the final count appears. *
 ********************************************************/

#include <stdio.h>
#include <math.h>

int main(void){
  int x;
  int i;
  float num;
  int pos=0;
  int neg=0;
  int zero=0;
  char bvb[100]; //To read up to 100 characters the user enters


  printf("Enter the amount of numbers to tell how many of them are positive and how many negative.\n"); //I ask for the amount of numbers
  fgets(bvb, sizeof(bvb), stdin);
  sscanf(bvb, "%d",&x); //I read the amount

  for (i=1;i<=x;i++) //I create a loop that won't stop until it reaches the amount of numbers the user entered before
  {
    printf("Enter the number %d \n",i); //I ask for the numbers
    fgets(bvb, sizeof(bvb), stdin);
    sscanf(bvb, "%f",&num); // I read them
    if (num>0)
    pos=pos+1; //I sum 1 to the amount of positive numbers if the entered number is positive
    if (num<0)
    neg=neg+1; //I sum 1 to the amount of negative numbers if the entered number is negative
    if (num==0)
    zero=zero+1; //I will count the number of zeros because they are neither positive nor negative numbers
    if (i==x){
      break;
    }
   }

    printf("The amount of positive numbers is %d, the amount of negative numbers is %d and the amount of zeros is %d.",pos,neg,zero);
    
  return 0;
}
