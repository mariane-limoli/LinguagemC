#include<stdio.h>
#include<string.h>

void InverteFrase(char *pFrase)
{
    char fraseInvertida[strlen(pFrase)];
    char vogal[]={"aeiouAEIOU"};
    int i, j, tamanho = (strlen(pFrase)-1);

    for(i=tamanho,j=0;i>=0;i--)
    {
        fraseInvertida[j] = '#';

        for(int v=0; v<10;v++)
        {
           if(*(pFrase+i)== vogal[v])
           {
                fraseInvertida[j] = *(pFrase+i);
                break;
           }
           else if (*(pFrase+i)== ' ')
           {
                fraseInvertida[j] = *(pFrase+i);
                break;
           }
        }
        j++;
    }
    fraseInvertida[j] = '\0';

    for(int x;x<strlen(fraseInvertida);x++)
        *(pFrase+x) = fraseInvertida[x];

    printf("Dentro da funcao: %s", fraseInvertida);
}

void mudaValor (char *muda)
{
    char frase[] = {"Agora mudou"};

    for(int x;x<11;x++)
        *(muda+x) = frase[x];
}


int main()
{
    char frase[20];

    printf("Digite uma frase: ");
    gets(frase);

    InverteFrase(frase);

    printf("\n%s", frase);

    mudaValor(frase);

     printf("\n%s", frase);
}
