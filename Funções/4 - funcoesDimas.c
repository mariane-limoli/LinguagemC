#include <stdio.h>

void fDobro()
{
  int num, dobro;
  printf("\nInforme um numero");
  scanf("%d",&num);
  dobro=num*2;
  printf("\nDobro de %d eh %d",num,dobro);

}

float fcalc_Media(float p1, float p2)
{
   float media;
   media=(p1+p2)/2;
   return media;
}

void fMedia()
{
   int codigo;
   float prova1, prova2;

   printf("Informe um codigo: ");
   scanf("%d",&codigo);

   while (codigo>0){
		printf("Informe a primeira nota");
		scanf("%f",&prova1);
		printf("\nInforme a segunda nota");
		scanf("%f",&prova2);

		printf("Media: %.2f", fcalc_Media(prova1,prova2));

        if (fcalc_Media(prova1,prova2)>=5)
		   printf("\n Aprovado");
		else
   		   printf("Reprovado");
		printf("\n Informe um codigo: ");
        scanf("%d",&codigo);
	}
}

int main()
{   int opcao;
   printf("Selecione uma opcao: ");
   scanf("%i", &opcao);

   if (opcao == 1)
      fDobro();
      if (opcao == 2)
      {
          float nota1, nota2, mediaa;

          printf("Informe a nota 1: ");
          scanf("%f", &nota1);
          printf("Informe a nota 2: ");
          scanf("%f", &nota2);
          mediaa = fcalc_Media(nota1, nota2);
          printf("A media é: %f", mediaa);
      }
      if (opcao == 3)
      fMedia();
}
