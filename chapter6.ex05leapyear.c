#include <stdio.h>
#include <math.h> 

int main(void) {
  int a;
  char bvb[100];

  printf("Enter a year to know if it is a leap-year\n");
  fgets(bvb, sizeof(bvb), stdin);
  sscanf(bvb, "%d", &a);
    if (a % 400 == 0){
        printf ("%d is a leap year.\n",a);
    }
    else if (a % 100 == 0){
        printf ("%d is not a leap year.\n",a);
    }
    else if (a % 4 == 0){
      printf ("%d is a leap year.\n",a);
    }
    else{
      printf ("%d is not a leap year.\n",a);
    }
  return 0;
}
