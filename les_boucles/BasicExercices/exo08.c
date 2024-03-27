/*Un programme qui demande à l'utilisateur de taper un entier n, supérieur à 2,
jusqu’à ce que la réponse convienne, puis qui calcule et affiche tous les termes de la suite de Fibonacci,
 inférieurs ou égaux à n. */
#include <stdio.h>
int main()
{
    int n, Ui, Un, Uj, i;
    printf("svp sisair un  numero superieur a 2  :");
    scanf("%d", &n);
    Ui = 0;
    Uj = 1;
    printf("U1 = 1\n");
    for (i = 2; i <= n; i++)
    {
        Un = Uj + Ui;
        Ui = Uj;
        Uj = Un;
        printf("U%d = %d\n",i,Un);
        //printf("Un+2= Un+1%d + Un%d",Uj,Ui);

    }

    return 0;
}