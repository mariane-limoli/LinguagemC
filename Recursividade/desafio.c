#include <stdio.h>

int m, n;



int FUN (int n)

{
    int x;

    if (n < 1)
        return 1;

    else
    {
        x=n*FUN(n - 1);
        m=m - 1;
        printf("\n%i - %i - %i", m, x, n);
        return m + x;

    }

}

int somatorio(int x)
{
    if(x==0)
    {
        printf(" 0 ");
       return 0;
    }
    else{
            printf("%i + ", x);
        return x+somatorio(x-1);
    }

}

int main()

{
   /*printf("Digite dois números: ")
   scanf("%d %d", &m, &n);
   printf("\n%d %d %d\n", m, n, FUN(n));*/
    int x;
   printf("\nSomatorio de: ");
   scanf("%i", &x);
    printf("= %i", somatorio(x));
   return 0;

}
