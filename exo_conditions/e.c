#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A, B, C, D;
    printf("svp entrer la valeur de A :");
    scanf("%d", &A);
    printf("svp entrer la valeur de B :");
    scanf("%d", &B);
    if (A * B > 0)
    {
        C = A;
        A = B;
        B = C;
        printf("a=%d", A);
        printf("b=%d", B);
    }
    else
    {
        C = A + B;
        D = A * B;
        A = C;
        B = D;
        printf("a=%d\n",A);
        printf("a=%d",B);
    }

    return 0;
}
