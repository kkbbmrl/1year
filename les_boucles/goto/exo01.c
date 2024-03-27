/*Sans utiliser de boucles, écrivez un programme qui demande un nombre
 entre 1 et 5, jusqu'à ce que la réponse soit appropriée.*/
#include <stdio.h>
int main()
{
    int n;
bachir:
    printf("entrer un nombre entre 1 et 5 :");
    scanf("%d", &n);
    if (n > 5 || n < 1)
        goto bachir;
        printf("bravooooo!!!!!");

    return 0;
}