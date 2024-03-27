#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
 int main ()       //seconds to hours min and sec 
{
 int S,min,H;
 int R,T;
      printf("veuillez entrer le duree en seconds svp:");
        scanf("%d",&T);
    //les operation :
     H = T / 3600; 
     R = T % 3600;//rest de H ==> % mean rest mod & / mean div 
     min = R / 60;//rest de H est divise sur 60 ==> les minutes 
     S = R % 60;//les secondes elle a reste dans les minutes 
      printf("%d H %d min %d sec",H,min,S); //affichage 
 return 0;
}