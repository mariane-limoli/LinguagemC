#include<stdio.h>
#include<string.h>

//62.823.257/0002-1

int main()
{
    char charcnpj[18],intcnpj[14];
    int i, j;

    printf("Digite o numero do CNPJ: ");
    scanf("%s", charcnpj);

    for(i=0,j=0; i<strlen(charcnpj); i++, j++)
        if(isdigit(charcnpj[i]))
        {
            intcnpj[j]=charcnpj[i]-48;
        }
    intcnpj[j]='\0';
    printf("%s", intcnpj);
}
