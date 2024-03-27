#include <stdio.h>
int main()
{

    int n, s, i;
    s = 0;
    for (i = 1; i <= 8; i++)
    {
        printf("entrer n%d", i);
        scanf("%d", &n);
        if (n < 0)
        {
            break; // la boucle break
        }

        s = s + n;
    }
    printf("la somme est %d", s);
    return 0;
}