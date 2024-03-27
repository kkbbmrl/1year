/*Un programme  qui demande un nombre de départ, et qui ensuite affiche
 les dix nombres suivants en utilisant les boucles for, while,
  et do ... while. Par exemple, si l'utilisateur entre le nombre 33,
  le programme affichera les nombres de 34 à 43.*/
#include <stdio.h>
int main()
{
    int i, n;
    printf("entrer un nombre entier :");
    scanf("%d", &n);

    /*for (i=n+1;i<=n+10;i++){ //la boucle for
    printf(" %d\t",i);
  }*/
    /*i=n+1;                   //la boucle while 
    while (i<=n+10)
    {
      printf(" %d\t",i);
      i++;
    }*/
    i = n + 1;        //la boucle do -- while 
    do
    {
        printf(" %d\t", i);
        i++;
    } while (i <= n + 10);
    return 0;
}