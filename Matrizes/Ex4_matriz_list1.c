#include <stdio.h>

int main()
{
    printf("--CALCULADORA DE LAMPADAS PARA A SUA CASA--\n\n");

    int QtdComodos;
    int i, SomaLampada=0, SomaPotenc=0;

    printf("Numero de comodos da residencia: ");
    scanf("%d", &QtdComodos);

    int ClasseComodo[QtdComodos], LadoA[QtdComodos], LadoB[QtdComodos];
    int AreaComodo[QtdComodos], PotencIluminacao[QtdComodos], QtdLampada[QtdComodos];

    printf("\nCLASSE DOS COMODOS\n");
    for (i=0 ; i<QtdComodos ; i++)
    {
        printf("Classe do comodo %d: ", i);
        scanf("%d", &ClasseComodo[i]);
    }

    printf("\nDIMENSOES DOS COMODOS\n");
    for (i=0 ; i<QtdComodos ; i++)
    {
        printf("\nDimensao do comodo %d ", i);
        printf("\n- Tamanho lado A (m): ");
        scanf("%d", &LadoA[i]);

        printf("- Tamanho lado B (m): ");
        scanf("%d", &LadoB[i]);
    }

    for (i=0 ; i<QtdComodos ; i++)
    {
        AreaComodo[i] = LadoA[i]*LadoB[i];
        printf("\n-Area do comodo %d: %d ", i, AreaComodo[i]);
        printf("m^2");
        if(ClasseComodo[i] == 1)
            PotencIluminacao[i] = AreaComodo[i]*10;
        if(ClasseComodo[i] == 2)
            PotencIluminacao[i] = AreaComodo[i]*15;
        if(ClasseComodo[i] == 3)
            PotencIluminacao[i] = AreaComodo[i]*18;
        if(ClasseComodo[i] == 4)
            PotencIluminacao[i] = AreaComodo[i]*20;
        if(ClasseComodo[i] == 5)
            PotencIluminacao[i] = AreaComodo[i]*25;

        printf("\n-Potencia de iluminacao: %d ", PotencIluminacao[i]); printf("W");

        QtdLampada[i] = PotencIluminacao[i]/60;
        printf("\n-Quantidade de lampadas de 60W: %d \n", QtdLampada[i]);

        SomaLampada = SomaLampada + QtdLampada[i];
        SomaPotenc = SomaPotenc + PotencIluminacao[i];
    }
    printf("\n-Total de lampadas para a casa: %d ", SomaLampada);
    printf("\n-Total de potencia de iluminacao: %d ", SomaPotenc);
    printf("W\n");
}
