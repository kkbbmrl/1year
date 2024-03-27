#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
  //programme qui calcule la resistance 
    float R1,R2,R3;
    float Rser,Rpar;
    printf("veuillez entrer les valeurs de R1 R2 et R3 :");
    scanf("%f %f %f",&R1,&R2,&R3);
Rser=R1+R2+R3;
Rpar=(R1*R2*R3)/(R1*R2+R1*R3+R2*R3);

printf(" la valeur de resistence en serie est %.2f",Rser);
printf("la valeur de resistance ne parallel est %.2f",Rpar);









}