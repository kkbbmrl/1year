#include <stdio.h>
 int anne(int n)
{

    if ( n%4 == 0)
    {
        //printf("al sana kabisa ");
        return 0;
    }
     else if  ((n%100 == 0) && (n%400 !=0))
    {
      // printf("al sanna machi kabisa");
      return 1;
    }
    return 0;
}
    int main()
    {
        int a;
        printf(" entrer laanne svp ");
        scanf("%d", &a);
        anne(a);
        return 0;
    }

