#include <stdio.h>
#include <math.h> 

int main(void){
  int mon;
  int qrt;
  int dim;
  int nck;
  int pen;

  printf("Enter the amount of money in cents.\n");
  scanf("%d", &mon);

  qrt=trunc(mon/25);
	dim=trunc((mon-qrt*25)/10);
  nck=trunc((mon-qrt*25-dim*10)/5);
  pen=trunc(mon-qrt*25-dim*10-nck*5);

  printf("You need %d",qrt);
  printf(" quarter(s), %d",dim);
  printf(" dime(s), %d",nck);
  printf(" nickle(s) and %d",pen);
  printf(" penny(ies).");

  return 0;
}
