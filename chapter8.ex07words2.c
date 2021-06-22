/********************************************************
 * Ex8.7 -- Numbers into words 2.0
 * *
 * Author: Rafael Marí. *
 * *
 * Purpose: Compute a program changes the numbers for words, but in this version put the number as it would be read. *
 * *
 * Usage: *
 * Run the program, enter the number and its name appears. *
 ********************************************************/

#include <stdio.h>

int main(void) {
  int x,a,b,c; //Define the 3 variables
  printf("Enter a number between 0 and 999. \n");
  scanf("%d",&x); //x is the number the user enters
  c=(x-x/10*10); //for units
  b=(x-x/100*100-c)/10; //for tens
  a=(x-x/1000*1000-b-c)/100; //for hundreds

  if ((x<=999)&&(x>=0)){ //The number must be within this range
        //If the ten is either 0 or 1, and the unit is not 0
    if (((b==0)||(b==1))&&(c!=0)){
      switch (a){
        case 0:
        printf("");
        break;
        case 1:
        printf("one hundred and ");
        break;
        case 2:
        printf("two hundred and ");
        break;
        case 3:
        printf("three hundred and ");
        break;
        case 4:
        printf("four hundred and ");
        break;
        case 5:
        printf("five hundred and ");
        break;
        case 6:
        printf("six hundred and ");
        break;
        case 7:
        printf("seven hundred and ");
        break;
        case 8:
        printf("eight hundred and ");
        break;
        case 9:
        printf("nine hundred and ");
        break;
      }
    } //If not, do this
    else{
      switch (a){
        case 0:
        printf("");
        break;
        case 1:
        printf("one hundred ");
        break;
        case 2:
        printf("two hundred ");
        break;
        case 3:
        printf("three hundred ");
        break;
        case 4:
        printf("four hundred ");
        break;
        case 5:
        printf("five hundred ");
        break;
        case 6:
        printf("six hundred ");
        break;
        case 7:
        printf("seven hundred ");
        break;
        case 8:
        printf("eight hundred ");
        break;
        case 9:
        printf("nine hundred ");
        break;
      }
    } //If the number ends in 0, it shows this
    if (c==0){
      switch (b){
        case 0:
        printf("");
        break;
        case 1:
        printf("ten ");
        break;
        case 2:
        printf("twenty ");
        break;
        case 3:
        printf("thirty ");
        break;
        case 4:
        printf("forty ");
        break;
        case 5:
        printf("fifty ");
        break;
        case 6:
        printf("sixty ");
        break;
        case 7:
        printf("seventy ");
        break;
        case 8:
        printf("eighty ");
        break;
        case 9:
        printf("ninety ");
        break;
      }
    } //if ten is 1, don't type anything because we will define this in the units section
    else if (b==1){
      switch (b){
        case 0:
        printf("");
        break;
        case 1:
        printf("");
        break;
        case 2:
        printf("");
        break;
        case 3:
        printf("");
        break;
        case 4:
        printf("");
        break;
        case 5:
        printf("");
        break;
        case 6:
        printf("");
        break;
        case 7:
        printf("");
        break;
        case 8:
        printf("");
        break;
        case 9:
        printf("");
        break;
      }
    }
    else{
      switch (b){
        case 0:
        printf("");
        break;
        case 1:
        printf("");
        break;
        case 2:
        printf("twenty ");
        break;
        case 3:
        printf("thirty ");
        break;
        case 4:
        printf("forty ");
        break;
        case 5:
        printf("fifty ");
        break;
        case 6:
        printf("sixty ");
        break;
        case 7:
        printf("seventy ");
        break;
        case 8:
        printf("eighty ");
        break;
        case 9:
        printf("ninety ");
        break;
      }
    } //If the ten is 1, show this values for the units, I don't put ten in case 0 because it is already defined
    if (b==1){
      switch (c){
        case 0:
        printf("");
        break;
        case 1:
        printf("eleven ");
        break;
        case 2:
        printf("twelve ");
        break;
        case 3:
        printf("thirteen ");
        break;
        case 4:
        printf("fourteen ");
        break;
        case 5:
        printf("fifteen ");
        break;
        case 6:
        printf("sixteen ");
        break;
        case 7:
        printf("seventeen ");
        break;
        case 8:
        printf("eighteen ");
        break;
        case 9:
        printf("nineteen ");
        break;
      }
    } //If the ten is not 1, just write this for the units
    else{
      switch (c){
        case 0:
        printf("");
        break;
        case 1:
        printf("one ");
        break;
        case 2:
        printf("two ");
        break;
        case 3:
        printf("three ");
        break;
        case 4:
        printf("four ");
        break;
        case 5:
        printf("five ");
        break;
        case 6:
        printf("six ");
        break;
        case 7:
        printf("seven ");
        break;
        case 8:
        printf("eight ");
        break;
        case 9:
        printf("nine ");
        break;
      }
    } //If the number is 0, write zero
    if ((a==0)&&(b==0)&&(c==0))
      printf("zero ");
  } //If the number is out of the range
  else{
    printf("The number must be between 0 and 999.");
  }
  return 0;
}
