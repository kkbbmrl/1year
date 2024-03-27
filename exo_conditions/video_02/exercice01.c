#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   float A, B;
   printf("entrer le num A = ");
   scanf("%f", &A);
   printf("entrer le num B = ");
   scanf("%f", &B);
   if (B != 0)
   {
      printf("la division est %.2f", A / B);
   }
   if (B == 0)
   {
      printf("la division par 0 est imposible ");

   }
   // autre solution
   else
      printf("la division par 0 est imposible ");

   return 0;
}






