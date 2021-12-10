#include <stdio.h>

int main()
{
    int VetorA[3], VetorB[3], VetorC[3], i;

    printf("Escolha os valores para cada elemento do vetor A:\n");
    for(i=0;i<3;i++)
        scanf("%d", &VetorA[i]);

    printf("\nEscolha os valores para cada elemento do vetor B:\n");
    for(i=0;i<3;i++)
        scanf("%d", &VetorB[i]);

    printf("\nVetor A = ");
    for(i=0;i<3;i++)
        printf("%d - ", VetorA[i]);

    printf("\nVetor B = ");
    for(i=0;i<3;i++)
        printf("%d - ", VetorB[i]);


    printf("\n\nVetor C = ");
    for(i=0; i<3; i++)
    {
        VetorC[i]=VetorA[i]+VetorB[i];
        printf("%d - ", VetorC[i]);
    }
}
