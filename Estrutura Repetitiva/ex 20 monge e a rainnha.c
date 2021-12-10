#include <stdio.h>

void main(void)
{
    int Casas;
    float Graos, TotalGraos;

    TotalGraos = 0;
    Graos = 1;

    for( Casas=1; Casas <=64; Casas=Casas+1)
    {
        TotalGraos = TotalGraos + Graos;
        Graos = Graos*2;
    }
    printf("O monge esperava receber: %.0f.\n", TotalGraos);
    system("pause");
}

