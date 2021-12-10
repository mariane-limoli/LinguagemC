#include <stdio.h>
#include<string.h>

void Cripto (char *pTexto1, char *pTexto2)
{
    char codigo1[] = {"abcdefghi"};
    char codigo2[] = {"123456789"};
    int i, j;

    for(i=0; i<strlen(codigo1); i++)
        for(j=0; j<strlen(codigo1); j++)
        {
            if (*(pTexto1+i) == codigo1[j])
            {
                *(pTexto2+i) = codigo2[j];
                break;
            }

            else if (*(pTexto1+i) == codigo2[j])
            {
                *(pTexto2+i) = codigo1[j];
                break;
            }

            else
            {
                *(pTexto2+i) = *(pTexto1+i);
                break;
            }
        }
}


int main()
{

    char texto1[9], texto2[9], texto3[9] ;

    printf( "Informe um texto de ate 8 caracteres:" ) ;
    scanf( "%[^\n]", texto1 ) ;

    Cripto( texto1, texto2 ) ;

    Cripto( texto2, texto3 ) ;

    printf( "O texto criptografado eh: \n%s\ne descriptografado eh: \n%s\n", texto2,texto3 ) ;
    return 0 ;
}
