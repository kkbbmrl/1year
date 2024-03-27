#include <stdio.h>
#include <stdlib.h>
int main ()
{
float A,B,max;
printf("entrer le num A = ");
scanf("%f",&A);
printf("entrer le num B = ");
scanf("%f",&B);
 /*if (A<B){

printf("the maximum is B:%.2f",B);

}
if (A>B) {
    printf("the maximum is A :%.2f",A);
}*/
//autre solution 
    max=A;
   if (B>A) {
     max=B;
   }
    printf("le maximum est :%f",max);
   return 0;
}