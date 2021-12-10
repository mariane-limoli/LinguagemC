//escreva um algoritmo que imprima todas as possibilidades de que no lançamento de
//dois dados a soma dos valores de cada lado seja 7
#include <stdio.h>
void main(void)
{
    int cont1, cont2, soma;

    for(cont1=1;cont1<=6;cont1=cont1+1)
    {
        for (cont2=1;cont2<=6;cont2=cont2+1)
        {
            if (cont1+cont2==7)
                printf("%i + %i = 7\n", cont1, cont2);
        }
    }
    system("pause");
}
