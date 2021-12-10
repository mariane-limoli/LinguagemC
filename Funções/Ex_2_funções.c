#include <stdio.h>
/*Elaborar um programa que leia o p�blico total de um jogo de
futebol e forne�a a renda do jogo, sabendo-se que havia 4 tipos
de ingressos assim distribu�dos:
10% - popular a 5,00,
50% - geral a 10,00,
30% - arquibancada a 20,00 e
10% de cadeiras a 30,00.

Crie uma fun��o que calcule o total da renda.*/

int fCalcRenda(int ingresso)
    {
        int fTotalRenda;
        fTotalRenda = ingresso*(0.1*5 + 0.5*10 + 0.3*20 + 0.1*30);
        return (fTotalRenda);
    }

int main()
    {
        int qntd_ingresso, Renda;
        printf("Quantos ingressos foram vendidos? ");
        scanf("%i", &qntd_ingresso);

        Renda = fCalcRenda(qntd_ingresso);

        printf("O total arrecadado pelo jogo foi: R$ %i", Renda);
    }
