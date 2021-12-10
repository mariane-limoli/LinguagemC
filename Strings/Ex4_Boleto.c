#include<stdio.h>
#include<string.h>

int main()
{
    char codBarras[54], codBanco[3], Valor[10];
    int iCodBanco, iValor, lin, aux2;
    float fValor;

    printf("Informe o código de barras: ");
    scanf("%[^\n]s", codBarras);
    fflush(stdin);

    while (strcmp(codBarras,"FIM") != 0)
    {
         scanf("%[^\n]s", codBarras);

        strncpy(codBanco, codBarras,3);
        codBanco[3]='\0';

        printf("\Banco: ");
        iCodBanco = atoi(codBanco);

        if(iCodBanco == 001)
            printf("Banco do Brasil.");
        else if (iCodBanco == 033)
            printf("Santander");
        else if (iCodBanco == 104)
            printf("Caixa Economica Federal.");
        else if (iCodBanco == 341)
            printf("Itau");
        else if (iCodBanco == 745)
            printf("Citibank");

        for (lin=43, aux2=0 ; lin<54; lin++, aux2++)
            {
                Valor[aux2]=codBarras[lin];
            }
        Valor[aux2]='\0';

        iValor=atoi(Valor);

        fValor = (iValor/100.0)*1.1;
        printf("\nTotal a pagar: R$%.2f.", fValor);

        }
}

//34190.12345 12345.67890 12345.678901 1 12340000012345
