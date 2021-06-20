/********************************************************
 * Ex03 -- bytes conversion. *
 * *
 * Author: Rafael Marí. *
 * *
 * Purpose: Calculate the time it takes a serial transmission line to send a file if it transmits 960 characters per seconds. *
 * *
 * Usage: *
 * Run the program, enter the size of the file, then the time it takes to transmit it appears. *
 ********************************************************/

#include <stdio.h>
#include <math.h> 

int main(void){
  int byt; //bytes
  int d; //days
  int h; //hours
  int m; //minutes
  int s; //seconds

  printf("Enter the size of the file in bytes.\n");
  scanf("%d",&byt);

  d=trunc(byt/(960*24*60*60));
  h=trunc((byt-d*960*24*60*60)/(960*60*60));
  m=trunc((byt-d*960*24*60*60-h*960*60*60)/(960*60));
  s=trunc(byt-d*960*24*60*60-h*960*60*60-m*960*60)/960;

  printf("It will take %d",d);
  printf(" day(s), %d",h);
  printf(" hour(s), %d",m);
  printf(" minute(s) and %d",s);
  printf(" second(s).");

  return 0;
}
