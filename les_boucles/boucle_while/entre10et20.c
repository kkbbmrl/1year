#include <stdio.h>
int main()
{
    int i,n;
    printf("ecrire un nombre entre 10 et 20 \n:");
    scanf("%d",&n);
    while (n<10 || n>20)
    {
       if (n<10){
       printf("le nombre est inferieur a 10\n ");
       }
       else if  (n>20)
       {
       printf("le nombre est superieur a 20 :\n");
       }
       printf("saisir un nombre entre 10 et 20\n ");
       scanf("%d",&n);
    }
    
      printf("tres bien u get it ");
      return 0;
}