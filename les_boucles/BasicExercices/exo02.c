/*Un programme qui calcule et affiche la somme :
    𝑆 = (1/1)+(1/2)+(1/3)+…(+1/𝑛) */
#include <stdio.h>
int main()
{
    int n;
    float S,i;
    printf(" entrer la valeur de n :");
    scanf("%d", &n);
    S = 0;
    for (i = 1; i <= n; i++)
    {
        S = S + (1 / i);
    }
    printf("S = %.2f", S);
    return 0;
}