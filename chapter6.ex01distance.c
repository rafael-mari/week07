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
  char bvb[100];

  printf("Enter the x and y coordinates of the first point separated by a comma.\n");
  fgets(bvb, sizeof(bvb), stdin);
  sscanf(bvb, "%f,%f",&x1, &y1);
  printf("Enter the x and y coordinates of the second point separated by a comma.\n");
  fgets(bvb, sizeof(bvb), stdin);
  sscanf(bvb, "%f,%f",&x2, &y2);

  d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

  printf("The distance between the 2 points is equal to %.3f units.",d);

  return 0;
}
