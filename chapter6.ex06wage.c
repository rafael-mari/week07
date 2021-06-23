#include <stdio.h>
#include <math.h>

int main(void){
  float h; //hours
  float hw; //hourly wage
  float ww; //weekly wage
  float wwe; //weekly wage with extra hours
  char bvb[1000];

  printf("Enter the amount of hours the employee worked this week and his hourly wage separated by a comma.\n");
  fgets(bvb, sizeof(bvb), stdin);
  sscanf(bvb, "%f,%f",&h, &hw);
  
  ww=hw*h;
  wwe=(hw*40)+(h-40)*(hw)*(1.5);

  if ((h<=40)&&(h>=0))
    printf("The weekly wage of the employee is $%f\n",ww);
  if (h>41)
    printf("The weekly wage of the employee is $%f",wwe);

  return 0;
}
