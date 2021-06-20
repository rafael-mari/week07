/********************************************************
 * Ex7.7 -- Time it takes sunlight to reach planets *
 * *
 * Author: Rafael Marí. *
 * *
 * Purpose: Compute a program that displays how much it takes sunlight to reach a planet that the user selects and show the result in hours, minutes and seconds. *
 * *
 * Usage: *
 * Run the program, enter the number of the planet, and it will appear the time it takes. *
 * *
 * Comments: 
 * I found the values of the aphelion and perihelion of each planet on this page: http://www.astronoo.com/es/articulos/caracteristicas-de-los-planetas.html *
 ********************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <math.h> 
#include <string.h> 

int main(void) {
  int pla;//planet selection
  int me, ve, ea, ma, ju, sa, ur, ne, pl; //planets
  float me1, me2, ve1, ve2, ea1, ea2, ma1, ma2, ju1, ju2, sa1, sa2, ur1, ur2, ne1, ne2, pl1, pl2; //time to the sun, 1 stands for the aphelion and 2 for the perihelion
  float c=299792.458;//speed of light in kilometers per second
  float me1d=69800000, me2d=46000000;//distances in kilometers, 1 is for aphelion and 2 for perihelion for Mercury
  int me1h, me1m, me1s, me2h, me2m, me2s;//time in hours, minutes and seconds for aphelion (1) and perihelion (2) for Mercury
  float ve1d=108940000, ve2d=107480000;//distances for Venus
  int ve1h, ve1m, ve1s, ve2h, ve2m, ve2s; //time for Venus
  float ea1d=152100000, ea2d=147100000;//distances for Earth
  int ea1h, ea1m, ea1s, ea2h, ea2m, ea2s; //time for Earth
  float ma1d=249230000, ma2d=206650000;//distances for Mars
  int ma1h, ma1m, ma1s, ma2h, ma2m, ma2s;//time for Mars
  float ju1d=816000000, ju2d=740680000;//distances for Jupiter
  int ju1h, ju1m, ju1s, ju2h, ju2m, ju2s;//time for Jupiter
  float sa1d=1503510000, sa2d=1349820000;//distances for Saturn
  int sa1h, sa1m, sa1s, sa2h, sa2m, sa2s;//time for Saturn
  float ur1d=3006320000, ur2d=2735000000;//distances for Saturn
  int ur1h, ur1m, ur1s, ur2h, ur2m, ur2s;//time for Saturn
  float ne1d=4537040000, ne2d=4459750000;//distances for Neptune
  int ne1h, ne1m, ne1s, ne2h, ne2m, ne2s; //time for Neptune
  float pl1d=7376120000, pl2d=4436750000;//distances for Pluto
  int pl1h, pl1m, pl1s, pl2h, pl2m, pl2s; //time for Pluto

  printf("Aphelion is the furthest point from the sun to one object that orbits the sun, and Perihelion is the nearest point.\n\n");//Some information

  printf("Mercury=1   Venus=2   Earth=3   Mars=4   Jupiter=5   \nSaturn=6   Uranus=7   Neptune=8   Pluto=9\n\n");//The options the user has

  printf("Enter the number of the planet you want to know how much it takes the sunlight to reach it.\n");//I ask for the planet
  scanf("%d",&pla);//The user enters the number of the planet
  
  me=1, ve=2, ea=3, ma=4, ju=5, sa=6, ur=7, ne=8, pl=9;//I define the number of each planet

  //Convert the total seconds into hours, minutes and seconds for every planet
  me1=me1d/c, me2=me2d/c;
  me1h=trunc(me1/3600);
	me1m=trunc((me1-me1h*3600)/60);
  me1s=trunc((me1-me1h*3600-me1m*60));
  me2h=trunc(me2/3600);
	me2m=trunc((me2-me2h*3600)/60);
  me2s=trunc((me2-me2h*3600-me2m*60));

  ve1=ve1d/c, ve2=ve2d/c;
  ve1h=trunc(ve1/3600);
	ve1m=trunc((ve1-ve1h*3600)/60);
  ve1s=trunc((ve1-ve1h*3600-ve1m*60));
  ve2h=trunc(ve2/3600);
	ve2m=trunc((ve2-ve2h*3600)/60);
  ve2s=trunc((ve2-ve2h*3600-ve2m*60));

  ea1=ea1d/c, ea2=ea2d/c;
  ea1h=trunc(ea1/3600);
	ea1m=trunc((ea1-ea1h*3600)/60);
  ea1s=trunc((ea1-ea1h*3600-ea1m*60));
  ea2h=trunc(ea2/3600);
	ea2m=trunc((ea2-ea2h*3600)/60);
  ea2s=trunc((ea2-ea2h*3600-ea2m*60));

  ma1=ma1d/c, ma2=ma2d/c;
  ma1h=trunc(ma1/3600);
	ma1m=trunc((ma1-ma1h*3600)/60);
  ma1s=trunc((ma1-ma1h*3600-ma1m*60));
  ma2h=trunc(ma2/3600);
	ma2m=trunc((ma2-ma2h*3600)/60);
  ma2s=trunc((ma2-ma2h*3600-ma2m*60));

  ju1=ju1d/c, ju2=ju2d/c;
  ju1h=trunc(ju1/3600);
	ju1m=trunc((ju1-ju1h*3600)/60);
  ju1s=trunc((ju1-ju1h*3600-ju1m*60));
  ju2h=trunc(ju2/3600);
	ju2m=trunc((ju2-ju2h*3600)/60);
  ju2s=trunc((ju2-ju2h*3600-ju2m*60));

  sa1=sa1d/c, sa2=sa2d/c;
  sa1h=trunc(sa1/3600);
	sa1m=trunc((sa1-sa1h*3600)/60);
  sa1s=trunc((sa1-sa1h*3600-sa1m*60));
  sa2h=trunc(sa2/3600);
	sa2m=trunc((sa2-sa2h*3600)/60);
  sa2s=trunc((sa2-sa2h*3600-sa2m*60));

  ur1=ur1d/c, ur2=ur2d/c;
  ur1h=trunc(ur1/3600);
	ur1m=trunc((ur1-ur1h*3600)/60);
  ur1s=trunc((ur1-ur1h*3600-ur1m*60));
  ur2h=trunc(ur2/3600);
	ur2m=trunc((ur2-ur2h*3600)/60);
  ur2s=trunc((ur2-ur2h*3600-ur2m*60));

  ne1=ne1d/c, ne2=ne2d/c;
  ne1h=trunc(ne1/3600);
	ne1m=trunc((ne1-ne1h*3600)/60);
  ne1s=trunc((ne1-ne1h*3600-ne1m*60));
  ne2h=trunc(ne2/3600);
	ne2m=trunc((ne2-ne2h*3600)/60);
  ne2s=trunc((ne2-ne2h*3600-ne2m*60));

  pl1=pl1d/c, pl2=pl2d/c;
  pl1h=trunc(pl1/3600);
	pl1m=trunc((pl1-pl1h*3600)/60);
  pl1s=trunc((pl1-pl1h*3600-pl1m*60));
  pl2h=trunc(pl2/3600);
	pl2m=trunc((pl2-pl2h*3600)/60);
  pl2s=trunc((pl2-pl2h*3600-pl2m*60));
  
  //If they select n option, do the following.
  if (pla==1){
    printf("\nIt takes %dh:%dm:%ds for sunlight to reach Mercury in its aphelion. \nAnd %dh:%dm:%ds in its perihelion.", me1h, me1m, me1s, me2h, me2m, me2s);
  }
  if (pla==2){
    printf("\nIt takes %dh:%dm:%ds for sunlight to reach Venus in its aphelion. \nAnd %dh:%dm:%ds in its perihelion.", ve1h, ve1m, ve1s, ve2h, ve2m, ve2s);
  }
  if (pla==3){
    printf("\nIt takes %dh:%dm:%ds for sunlight to reach Earth in its aphelion. \nAnd %dh:%dm:%ds in its perihelion.", ea1h, ea1m, ea1s, ea2h, ea2m, ea2s);
  }
  if (pla==4){
    printf("\nIt takes %dh:%dm:%ds for sunlight to reach Mars in its aphelion. \nAnd %dh:%dm:%ds in its perihelion.", ma1h, ma1m, ma1s, ma2h, ma2m, ma2s);
  }
  if (pla==5){
    printf("\nIt takes %dh:%dm:%ds for sunlight to reach Jupiter in its aphelion. \nAnd %dh:%dm:%ds in its perihelion.", ju1h, ju1m, ju1s, ju2h, ju2m, ju2s);
  }
  if (pla==6){
    printf("\nIt takes %dh:%dm:%ds for sunlight to reach Saturn in its aphelion. \nAnd %dh:%dm:%ds in its perihelion.", sa1h, sa1m, sa1s, sa2h, sa2m, sa2s);
  }
  if (pla==7){
    printf("\nIt takes %dh:%dm:%ds for sunlight to reach Uranus in its aphelion. \nAnd %dh:%dm:%ds in its perihelion.", ur1h, ur1m, ur1s, ur2h, ur2m, ur2s);
  }
  if (pla==8){
    printf("\nIt takes %dh:%dm:%ds for sunlight to reach Neptune in its aphelion. \nAnd %dh:%dm:%ds in its perihelion.", ne1h, ne1m, ne1s, ne2h, ne2m, ne2s);
  }
  if (pla==9){
    printf("\nIt takes %dh:%dm:%ds for sunlight to reach Pluto in its aphelion. \nAnd %dh:%dm:%ds in its perihelion.", pl1h, pl1m, pl1s, pl2h, pl2m, pl2s);
  }

  return 0;
}
