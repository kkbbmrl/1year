/*Un programme qui demande à l'utilisateur de taper un entier n,
puis qui calcule la somme des carrées des n premiers entiers impairs.*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n, i;
    float j, s;
    printf(" entrer le nombre n svp :");
    scanf("%d", &n);
    s = 0;
    j = 1;
    for (i = 1; i <= n; i++)
    {
        s = s + pow(j, 2);
        j = j + 2;
    }
    printf("la somme est :%.2f", s);

    return 0;
}