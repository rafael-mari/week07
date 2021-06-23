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
  char bvb[100];

  printf("Enter the size of the file in bytes.\n"); //I ask for the amount of bytes
  fgets(bvb, sizeof(bvb), stdin);
  sscanf(bvb, "%d",&byt); //I read the amount of bytes

  //trunc is to divide a number but the result is an integer
  d=trunc(byt/(960*24*60*60)); //960 because the transmission line transmits 960 characters per second
  h=trunc((byt-d*960*24*60*60)/(960*60*60)); //24 because of the 24 hours
  m=trunc((byt-d*960*24*60*60-h*960*60*60)/(960*60)); //60 because of the sixty minutes an hour has
  s=trunc(byt-d*960*24*60*60-h*960*60*60-m*960*60)/960; //Another 60 because of the 60 seconds a minute has

  //I display the time in days, hours, minutes and seconds
  printf("It takes %d day(s), %d hour(s), %d minute(s) and %d second(s).",d,h,m,s);

  return 0;
}
