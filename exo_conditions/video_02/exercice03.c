#include <stdio.h>
#include <stdlib.h>
int main (){
    int N;
    printf("veulliez entrer la num N : ");
    scanf("%d",&N);
    if (N>0)
    printf ("Ce nombre est positive ");
    else if (N<0)
    printf("Ce nombre est  negative ");
    else 
    printf("Ce nombre est nulle ");
    return 0;
}