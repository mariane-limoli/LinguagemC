#include<stdio.h>

int main()
{
    int i, comodos;
    printf("\nDIMENSOES DOS COMODOS\n");

    scanf("%d", &comodos);
    int LadoA[comodos], LadoB[comodos];

    for (i=0 ; i<comodos ; i++)
    {
        printf("\nDimensao do comodo %d ", i);
        printf("\n- Tamanho lado A (m): ");
        scanf("%d", &LadoA[i]);

        printf("- Tamanho lado B (m): ");
        scanf("%d", &LadoB[i]);
    }

    for (i=0 ; i<comodos ; i++)
        printf("%d", LadoA[i]);
    printf("\n");
    for (i=0 ; i<comodos ; i++)
        printf("%d", LadoB[i]);
}
