#include <stdio.h>

void main(void)
{
    int voto, c1, c2, add;
    printf("Digite seu voto: ");
    scanf(" %i", &voto);

    add = 1;
    while (voto != 0)
    {
        if (voto == 1)
            c1 = c1 + add;

        if (voto == 2)
            c2 = c2 + add;

        printf("Digite seu voto: ");
        scanf("%i", &voto);
    }
    printf("Candidato 1: %i \nCandidato 2: %i \n ", c1, c2);
    //printf("Candidato 3: %i \n Candidato 4: %i \n ", c3, c4);

 system("pause");
}
