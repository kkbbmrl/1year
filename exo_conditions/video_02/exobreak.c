#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N;
    printf("entrer un nombre entre 1 et 7 :");
    scanf("%d", &N);
    switch (N)
    {
    case 1:
        printf("Lundi");
        break;
    case 2:
        printf("mardi");
        break;
    case 3:
        printf("mercredi");
        break;
    case 4:
        printf("jeudi");
        break;
    case 5:
        printf("vendredi");
        break;
    case 6:
        printf("Samedi");
    case 7:
        printf("Dimanche");
        break;
    }
    return 0;
}
