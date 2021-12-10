// Escreva um algoritmo que calcule e escreva uma tabela de graus centígrados em
//função de graus fahrenheit
#include <stdio.h>
void main(void)
{
    int  Cont;
    float Centigrados, Fare;
    for( Cont=50; Cont <=150; Cont=Cont+1)
    {
        Fare = Cont;
        Centigrados = (5*(Fare - 32))/9;
        printf("Fahrenheit: %i =>  Centigrados: %.2f.\n", Cont, Centigrados);
    }
    system("pause");
}
