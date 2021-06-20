/********************************************************
 * Ex07 -- Write a program that, given two points of the cartesian plane which are provided by the user, computes the slope-intercept equation. *
 * *
 * Author: Rafael Marí. *
 * *
 * Usage: *
 * Run the program, enter one by one the x and y coordinates as required and the slope-intercept equation will appear. *
 ********************************************************/

#include <stdio.h>
#include <math.h>

int main(void){
  float x1;
  float y1;
  float x2;
  float y2;
  int sl1; //slope numerator
  int sl2; //slope denominator
  float m; //slope in decimals
  int b1; //interception in the y axis, numerator
  float b; //interception in the y axis in decimals

  printf("Enter the x coordinate of the first point.\n");
  scanf("%f",&x1);
  printf("Enter the y coordinate of the first point.\n");
  scanf("%f",&y1);
  printf("Enter the x coordinate of the second point.\n");
  scanf("%f",&x2);
  printf("Enter the y coordinate of the second point.\n");
  scanf("%f",&y2);

  m=(y2-y1)/(x2-x1);
  sl1=(y2-y1);
  sl2=(x2-x1);
  b1=-sl1*x1+sl2*y1;
  b=-m*x1+y1;

  printf("The slope-intercept equation of the line is the following:\n");
  printf("y=(%d",sl1);
  printf("/%d",sl2);
  printf(")x+(%d",b1);
  printf("/%d",sl2);
  printf(")\n");
  printf("Or in decimals:\n");
  printf("y=(%.3f",m);
  printf(")x+(%.3f",b);
  printf(")");

  return 0;
}
