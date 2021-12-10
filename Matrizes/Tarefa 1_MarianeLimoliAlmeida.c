//Mariane Limoli Almeida - CodeBlocks
#include<stdio.h>

int main()
{
    int vTemperaturas[7];
    int i, soma=0, media, acimaMedia=0;

    printf("Digite a temperatura de cada dia da semana: ");
    for (i=0; i<7;i++)
    {
        scanf("%d", &vTemperaturas[i]);
        soma = soma + vTemperaturas[i];
    }
    media=soma/7;
    printf("Media de temperatura da semana: %d graus", media);

    for (i=0; i<7;i++)
        if (vTemperaturas[i]>media)
            acimaMedia=acimaMedia+1;

    printf("\nDias com temperatura acima da media: %d\n", acimaMedia);
}
