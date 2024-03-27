#include <stdio.h>
#include <stdlib.h>
int main ()
{
int A ,B;
     printf("entrer la valeur de A svp :");
          scanf("%d",&A);
      printf(" entrer la valeur de B svp :");
          scanf("%d",&B);
 //achange le contunue sans add un autre var  
       /* printf (" la valeur de A est :%d\n",B);       
        printf (" la valeur de B est :%d",A);*/
 //autre methode 
       A=A-B; // ==>exp A=10 B=5 A=10-5==>A=5
       B=A+B; // B=(5+5) ==>   B=10
       A=B-A; // A=(10-5)==>   A=05
 printf (" la valeur de A est :%d\n",A);       
        printf (" la valeur de B est :%d",B);

    return 0;

} 