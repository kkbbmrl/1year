#include <stdio.h>
#include <math.h>
int main()
{
    int XA,XB,YA,YB;
    double DIST;
    printf("Entrer les coordonnee de A");
    scanf("%d",&XA);
    scanf("%d",&YA);
    printf("Entrer les coordonnee de B");
    scanf("%d",&XB);
    scanf("%d",&YB);
    DIST=sqrt((XA-XB)*(XA-XB)+(YA-YB)*(YA-YB));
    printf("La distance A et B est : %f",DIST);

    return 0;
}