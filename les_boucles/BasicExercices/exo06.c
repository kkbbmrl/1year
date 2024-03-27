/* Un programme qui affiche les diviseurs d’un entier positif n
non nul.*/
#include <stdio.h>
int main()
{
    int n, i;

    do
    {
        printf("entrer un nombre n svp :");
        scanf("%d", &n);
    } while (n <= 0);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("le dev  est %d \n", i);
        }
    }
    return 0;
}
