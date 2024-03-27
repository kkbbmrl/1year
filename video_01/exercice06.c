#include<stdio.h>
#include<stdlib.h>
int main ()
{
 int a,b,c;
    printf("antrer la valeur de a : ");
       scanf("%d",&a);
    printf("veuillez antrer la valeur de b :");
       scanf("%d",&b);
            c=a;
            a=b;                      //enchange le contuneu avec un autre var ==C
            b=c;
    printf("a = %d \n ",a);
    printf("b = %d ",b);
return 0;

}