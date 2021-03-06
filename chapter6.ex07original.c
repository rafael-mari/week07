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
  char bvb[100];

  printf("Enter the x and y coordinates of the first point separated by a comma.\n");
  fgets(bvb, sizeof(bvb), stdin);
  sscanf(bvb, "%f,%f",&x1, &y1);
  printf("Enter the x and y coordinates of the second point separated by a comma.\n");
  fgets(bvb, sizeof(bvb), stdin);
  sscanf(bvb, "%f,%f",&x2, &y2);

  m=(y2-y1)/(x2-x1); //slope formula
  sl1=(y2-y1); //numerator of the slope
  sl2=(x2-x1); //denominator of the slope
  b1=-sl1*x1+sl2*y1; //numerator of the b value
  b=-m*x1+y1; //b cleared

  printf("The slope-intercept equation of the line is the following:\n");
  printf("y=(%d/%d)x+(%d/%d)\n",sl1,sl2,b1,sl2);
  printf("Or in decimals:\n");
  printf("y=(%.3f)x+(%.3f)",m,b);

  return 0;
}
