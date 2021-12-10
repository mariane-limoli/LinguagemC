#include<stdio.h>

int fprocura(int *vet, int num, int i)
{

    if(*vet == num)
        return i;
    else if(i<0)
        return -1;
    else
    {
        return fprocura(vet+1, num, i+1);
    }


}

int main()
{
    int vetor[5] = {10, 20, 30, 40, 50};
    int num ;

    printf("Digite um valor: ");
    scanf("%i", &num);

    if(fprocura(vetor,num, 5)>= 0)
        printf("O valor procurado esta na posicao: %i", fprocura(vetor,num, 0));
    else
        printf("Valor não encontrado no vetor");
}
