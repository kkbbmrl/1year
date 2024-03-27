#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()
 {
float somme,produit,diff,divv,A,B;

printf("entrer les deux valeurs A et B  svp :");
scanf("%f %f",&A,&B);
   
   somme = A+ B;
   produit = A * B;
   diff = A - B;
   divv = A / B;
   printf("la somme est: %.2f\n",somme);
   printf("le produit est: %.2f\n",produit);
   printf("la division est :%.2f\n ",divv);
   printf("la diff est : %.2f\n",diff);
    return 0; 
 }