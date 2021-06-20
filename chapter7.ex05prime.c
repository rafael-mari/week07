/********************************************************
 * Ex05 -- Prime number *
 * *
 * Author: Rafael Marí. *
 * *
 * Purpose: Compute a program that tells if a number is prime or not. *
 * *
 * Usage: *
 * Run the program, enter number and it appears if it is prime or not. *
 ********************************************************/

#include <stdio.h>
#include <math.h>

int truth(int numero); // I define variables
int main(void) {
  int num; // define the variable number

  printf("Enter a number: \n"); // I ask for the number
  scanf("%d", &num); // I read the number
  if (truth(num)) { //If the condition described below is reached it is a prime number
    printf("It is a prime number");
  } else {
    printf("It is not a prime number"); //If the condition is not reached, it is not a prime number
  }
  return 0;
}

int truth(int num) {
  if (num==0||num==1) return 0; // If the number is 0 or 1, it is not a prime number, they are considered neither prime nor composed numbers
  if (num==4) return 0; // If the number is 4, it is not a prime number
  for (int x=2; x<num/2; x++) { // We create a loop from 2 to half the entered number
    if (num%x==0) return 0; //If the number can be divided with a remainder of 0, then it is not a prime number
  }
  return 1; //If none of those conditions was reached, the number is prime
}
