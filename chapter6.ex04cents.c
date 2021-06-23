#include <stdio.h>
#include <math.h> 

int main(void){
  int mon;
  int qrt;
  int dim;
  int nck;
  int pen;
  char bvb[100];

  printf("Enter the amount of money in cents.\n");
  fgets(bvb, sizeof(bvb), stdin);
  sscanf(bvb, "%d", &mon);

  if ((mon>=0)&&(mon<=100)){
    qrt=trunc(mon/25);
    dim=trunc((mon-qrt*25)/10);
    nck=trunc((mon-qrt*25-dim*10)/5);
    pen=trunc(mon-qrt*25-dim*10-nck*5);

    printf("You need %d quarter(s), %d dime(s), %d nickle(s) and %d penny(ies).",qrt,dim,nck,pen);
  }
  else{
    printf("Enter the amount between 0 and 100 cents.");
  }

  return 0;
}
