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
   // Esta variável média na função media_notas é diferente da que está na função main
   return media;
}

int main()
{
	float n1, n2, media;
	printf("Cálculo de media de duas notas\n");
	printf("Informe a primeira nota");
	scanf("%f",&n1);
	printf("\nInforme a segunda nota");
	scanf("%f",&n2);
	media=media_notas(n1,n2);
	printf(" A media das notas: %.2f \n a função media notas é:",media, media_notas);
	aprovacao(media);

}










