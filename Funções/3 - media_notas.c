#include <stdio.h>
#include <stdlib.h>

void aprovacao(float media)
{

   if (media >=6)
     printf("Aprovado");
   else
       printf("Reprovado");
}

float media_notas(float nota1, float nota2)
{
   float media;
   media=(nota1+nota2)/2;
   // Esta vari�vel m�dia na fun��o media_notas � diferente da que est� na fun��o main
   return media;
}

int main()
{
	float n1, n2, media;
	printf("C�lculo de media de duas notas\n");
	printf("Informe a primeira nota");
	scanf("%f",&n1);
	printf("\nInforme a segunda nota");
	scanf("%f",&n2);
	media=media_notas(n1,n2);
	printf(" A media das notas: %.2f \n a fun��o media notas �:",media, media_notas);
	aprovacao(media);

}










