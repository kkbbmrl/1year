#include <stdio.h>
#include<stdlib.h>
#include<math.h> //bib de math et qui de permet de calcule la puissance  
int main ()
{
float x, y ,p;
printf("entrer les valeures de x et y :");
scanf("%f %f",&x,&y);      
  p=pow(x,y);
  printf("la puisssance de x^y est %.2f",p);
    return 0;
}