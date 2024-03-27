#include<stdio.h> 
#include<stdlib.h>
#include<math.h>
int main ()
{
 float  n1,n2,n3,n4,n5;
 float moy,s;

printf("entrer les 5 notes :");
scanf("%f %f %f %f %f",&n1,&n2,&n3,&n4,&n5);
  s=n1+n2+n3+n4+n5;
  moy=s/5;
  printf("la somme de 5 notes est :%.2f\n ",s);
  printf("la moyyenne de 5 notes est : %.2f \n ",moy );



    return 0;

}