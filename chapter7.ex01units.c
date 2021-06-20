/********************************************************
 * Ex01 -- Units conversion. *
 * *
 * Author: Rafael Marí. *
 * *
 * Purpose: Convert the English units into metric units. *
 * *
 * Usage: *
 * Run the program, choose what you want to convert and then input the values, then the converted value appears. *
 ********************************************************/

#include <stdio.h> //the main library in C programming
#include <math.h> //the math library to make calculations

int main(void){
  int x; //to choose what you want to convert
  float km; //kilometers
  float ml; //miles
  float lt; //liters
  float gl; //gallons
  float cm; //centimeters
  float inc; //inches
  float mt; //meters
  float ft; //feet
  float kg; //kilograms
  float pd; //pounds

  //In this section the user chooses what he wants to convert
  printf("Choose what you want to convert.\n");
  printf("press 1 if you want to convert miles into kilometers.\n");
  printf("press 2 if you want to convert gallons into liters.\n");
  printf("press 3 if you want to convert inches into centimeters.\n");
  printf("press 4 if you want to convert feet into meters.\n");
  printf("press 5 if you want to convert pounds into kilograms.\n");
  scanf("%d",&x); //I read the option selected

  if (x==1){ //if x is 1, I do the following:
    printf("Enter the miles\n"); //They input the miles
    scanf("%f",&ml); //I read the miles
    km=ml*1.60935; //I do the conversion
    printf("%.3f",ml);
    printf(" miles is equal to %.3f",km);
    printf(" kilometers."); //I show the result in km
  }
  else if (x==2){ //if x is 2 instead, I do the following:
    printf("Enter the gallons\n"); //They input the gallons
    scanf("%f",&gl); //I read the gallons
    lt=gl*3.78541; //I do the conversion
    printf("%.3f",gl);
    printf(" gallons is equal to %.3f",lt);
    printf(" liters."); //I show the result in liters  
  }
  else if (x==3){ //if x is 3 instead, I do the following:
    printf("Enter the inches\n"); //They input the inches
    scanf("%f",&inc); //I read the inches
    cm=inc*2.54; //I do the conversion
    printf("%.3f",inc);
    printf(" inches is equal to %.3f",cm);
    printf(" centimeters."); //I show the result in centimeters  
  }
  else if (x==4){ //if x is 4 instead, I do the following:
    printf("Enter the feet\n"); //They input the feet
    scanf("%f",&ft); //I read the feet
    mt=ft*0.3048; //I do the conversion
    printf("%.3f",ft);
    printf(" feet is equal to %.3f",mt);
    printf(" meters."); //I show the result in meters  
  }
  else if (x==5){ //if x is 5 instead, I do the following:
    printf("Enter the pounds\n"); //They input the pounds
    scanf("%f",&pd); //I read the pounds
    kg=pd*0.453592; //I do the conversion
    printf("%.3f",pd);
    printf(" pounds is equal to %.3f",kg);
    printf(" kilograms."); //I show the result in kilograms  
  }

return 0;
}
