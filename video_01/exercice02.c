#include <stdio.h> 
                                       //exercice de la surface 
int main()
{
   float longeur,largeur;
   float S,P;
   printf("entrer largeur de cette rectangle :");
   scanf("%f",&largeur);
   printf("entrer longeur de cette rectangle :");
   scanf("%f",&longeur);
   P=(largeur + longeur)*2;
   S=largeur*longeur;
   printf("la surface est : %.2f",S);
   printf(" la perimitre est : %.2f",P);
    return 0;
}