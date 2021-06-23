/********************************************************
 * Ex8.6 -- Numbers into words
 * *
 * Author: Rafael Marí. *
 * *
 * Purpose: Compute a program changes the numbers for words. *
 * *
 * Usage: *
 * Run the program, enter the numbers and the words appear. *
 ********************************************************/

#include <stdio.h>
#include <math.h>

int main(void){
  int x, a, b, c;
  char bvb[100]; //To read up to 100 characters the user enters

  printf("Enter a number between 0 and 999.\n");
  fgets(bvb, sizeof(bvb), stdin);
  sscanf(bvb, "%d",&x); 
  c=(x-x/10*10); //for the units
  b=(x-x/100*100-c)/10; //for the tens
  a=(x-x/1000*1000-b-c)/100; //for the hundreds

  if ((x<=999)&&(x>=0)){ //Define my range
    switch (a){ //A different printf depending on the number
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
    if (a==0){ //If the hundred position digit is a 0 and the tens position digit too, don't write anything
      switch (b){
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
    }
    else{ //If the hundreds position digit is not a zero and the tens position is a zero, type zero
      switch (b){
        case 0:
        printf("zero ");
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
    }
    switch (c){
      case 0:
      printf("zero ");
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
  }
  else{
  printf("Enter a number between 0 and 999."); //If the user enters a number out of the range I ask him to do it again
  }    
  return 0;
}
