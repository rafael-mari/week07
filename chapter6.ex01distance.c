#include <stdlib.h>
#include <stdio.h>
#include <math.h> 
#include <string.h> 

int main(void){
  float x1;
  float y1;
  float x2;
  float y2;
  float d;

  printf("Enter the x coordinate of the first point.\n");
  scanf("%f",&x1);
  printf("Enter the y coordinate of the first point.\n");
  scanf("%f",&y1);
  printf("Enter the x coordinate of the second point.\n");
  scanf("%f",&x2);
  printf("Enter the y coordinate of the second point.\n");
  scanf("%f",&y2);

  d=sqrt((x2-x1)*(x2-x1)+(y1-y2)*(y2-y1));

  printf("The distance between the 2 points is equal to %f",d);
  printf(" units.");

  return 0;

}
