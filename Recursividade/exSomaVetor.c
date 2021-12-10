#include<stdio.h>
//Faça uma função recursiva que faça a soma de todos os valores de um vetor de int de 10 elementos.

int somaVetor(int *vetor, int cont)
{
    cont--;
    if(cont >0)
    {
        return *(vetor+cont)+somaVetor(vetor,cont);
    }
    else
        return *(vetor+cont);
}

int main()
{
int vetor[5] = {1, 2, 3, 4, 5};

 printf("A soma dos valores eh igual a: %d", somaVetor(vetor, 5));
}

int main()
{
    int vetor[5] = {5, 5, 5, 5, 5};

    printf("A soma dos valores e: %i", SomaVetor(vetor,5, 0));
}
