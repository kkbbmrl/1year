#include <stdio.h>
void cube(float n)
{
    float m;
    m = (n * n * n);
    printf("le cube de a est :%.2f", m);
}

int main()
{
    float a;
    printf(" entrer la valeur de a ");
    scanf("%f", &a);
    cube(a);
    return 0;
} 