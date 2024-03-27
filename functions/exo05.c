#include <stdio.h>
void   num(long n)
{
    int i;
    i = 0;
    do
    {
        n = n / 10;
        i++;
    } while (n != 0);
   printf("le nombre des chiffres est :%d",i);
    }
int main()
{
    int n;
    printf("entrer un nombre svp :");
    scanf("%d", &n);

        num(n);

    return 0;
}