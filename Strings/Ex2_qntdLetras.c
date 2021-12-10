#include<stdio.h>
#include<string.h>

int main()
{
    char palavra[20];
    char letra, qntLetra=0;

    printf("Informe uma palavra: ");
    scanf("%s", palavra);
    printf("Informe uma letra: ");
    scanf(" %c", &letra);

    for(int i=0;i<strlen(palavra);i++)
        if (palavra[i]==letra)
            qntLetra++;
    printf("A quantidade de letras %c na palavra %s e: %i ", letra, palavra, qntLetra);
}
