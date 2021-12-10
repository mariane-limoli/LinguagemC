#include <stdio.h>
void main(void)
{
    int cont;
    float H, n, soma;
    printf("A soma da série H = 1/1 + 3/2 + 5/3 +...+99/50 = ");
    for (cont=0;cont<=49; cont=cont+1)
    {
        n = 1 + cont;
        H = (2*n - 1)/n;
        soma = soma + H;
    }
    printf("%f\n", soma);

system("pause");
}
