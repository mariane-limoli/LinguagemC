#include<stdio.h>
#include<string.h>

int main()
{
    int i, c;
    char numeros[7], caracteres[7], vetor[7];
    //numeros ==7 pois \0

    for(i=0;i<6;i++)
    {
        printf("Informe o numero %i: ", i+1);
        scanf("%s", &numeros[i]);
    }
    printf("\n");

    for(i=0;i<6;i++)
    {
        printf("Informe o caractere %i: ", i+1);
        scanf("%s", &caracteres[i]);
    }
    printf("\n");

    for(i=0;i<6;i++)
        for(c=0;c<numeros[i]; c++);
            printf("%s", caracteres[i]);
}
