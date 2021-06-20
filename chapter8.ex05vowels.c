/********************************************************
 * Ex8.5 -- Vowel or consonant *
 * *
 * Author: Rafael Marí. *
 * *
 * Purpose: Compute a program that tells if a letter is a vowel or a consonant. *
 * *
 * Usage: *
 * Run the program, enter the number of the letter, and it will appear whether it is a vowel or a consonant. *
 ********************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <math.h> 
#include <string.h> 

int main(void) {
  int lt;//letter
  int a,b,c,d,e,f,g,h,i,j,k,l,m,n,ñ,o,p,q,r,s,t,u,v,w,x,y,z;

  printf("a=1    b=2    c=3    d=4    e=5    f=6    g=7 \nh=8    i=9    j=10   k=11   l=12   m=13   n=14 \nñ=15   o=16   p=17   q=18   r=19   s=20   t=21 \nu=22   v=23   w=24   x=25   y=26   z=27\n");


  printf("Enter the number of the letter you want to know whether it is a vowel or a consonant.\n");
  scanf("%d",&lt);
  
  a=1, b=2, c=3, d=4, e=5, f=6, g=7, h=8, i=9, j=10, k=11, l=12, m=13, n=14, ñ=15, o=16, p=17, q=18, r=19, s=20, t=21, u=22, v=23, w=24, x=25, y=26, z=27;

  if ((lt==1)||(lt==5)||(lt==9)||(lt==16)||(lt==22)){
    printf("It is a vowel.");
  }
  else if  ((lt!=1)&&(lt!=5)&&(lt!=9)&(lt!=16)&&(lt!=22)){
    printf("It is a consonant.");
  }
  return 0;
}
