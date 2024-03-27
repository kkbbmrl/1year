/*Un programme qui demande un nombre positif non nul de départ,
 et qui calcule sa factorielle. */
#include <stdio.h>
int main()
{

    int n, i;
    float f;
    nombre_pos :
    printf("entrer un nombre n svp :");
    scanf("%d", &n);
    if (n < 0)
    goto nombre_pos; 
       else if (n > 0)
    {
        f = 1;
        for (i = 2; i <= n; i++)
        {
            f = f * i;
        }
        printf("le factoriel de %d est :%.2f", n, f);
    }
        else
         printf("le factoriel de numbre 0 est 1 ");
        return 0;
}