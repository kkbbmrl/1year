#include <stdio.h>
int main(){

int  n,i;
printf("entrer svp le n ");
scanf("%d",&n);
while (n<=0 || n>10)
{
    printf("write the number n between 0 to 10");
    scanf("%d",&n);
}
i=0;
while (i<=10)           //boucle while to repeat 
{
    printf("%d x %d =%d\n ",i,n,i*n);
    i++;
}
for (i=0;i<=10;i++)       //boucle for to repeat 
{
 printf("%d x %d =%d\n ",i,n,i*n);

}
return 0;
}