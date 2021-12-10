#include<stdio.h>


int triangulo(int n)
{
    if(n>1)
    {
        n--;
        printf("\n%i", n);
        return n + triangulo(n);

    }
    else
        return 1;
}

int main()
{
    int num;

    printf("Escreva um n: ");
    scanf("%i", &num);


    printf("\n %i", triangulo(num));
}
