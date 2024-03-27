#include <stdio.h>
void premie(int p)
{
    int premier, i;
    premier = 1;
    for (i= 2; i <= p / 2; i++)
    {
        if (p % i == 0)
        {
            premier = 0;
            break;
        }
    }
    if (premier == 1)
        printf("le nombre est premier ");
    else
        printf("le nombre n'est pas premier ");
}
int main()
{
    int n;
    printf(" entrer le nombre svp ");
    scanf("%d", &n);
    premie(n);
    return 0;
}