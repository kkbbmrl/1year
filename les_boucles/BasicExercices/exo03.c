/*Un programme qui calcule et affiche la somme :
    𝑆 = 1+10+100+…+10^𝑛 */
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    float S, i;
    printf(" entrer la valeur de n :");
    scanf("%d", &n);
    S = 0;
    for (i = 0; i <= n; i++)
    {
        S = S + pow(10,i);
    }
    printf("S = %.2f", S);
    return 0;

    return 0;
}