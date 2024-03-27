/*Un programme qui demande à l'utilisateur de taper un entier n,
 supérieur à 2, jusqu’à ce que la réponse convienne, puis qui calcule et affiche tous les termes
 de la suite de Fibonacci, inférieurs ou égaux à n. */
#include <stdio.h>
int main()
{
    int n, i, Un, Ui;
    printf("Veuillez entrer la valeur de n svp :");
    scanf("%d", &n);

    Ui = 6;
    for (i = 1; i <= n; i++)
    {
        Un = 4 * Ui + 10;
        Ui = Un;
    }
    printf("Un =%d ", Ui);

    return 0;
}