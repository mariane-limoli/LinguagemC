#include<stdio.h>
void main (void)
{
    int TabIdade[10];
    int col;

  for(col=0; col<=9; col=col+1)
  {
    printf("Digite a idade: ");
    scanf("%i", &TabIdade[col]);
  }
    printf("\n");
  for(col=0; col<=9; col=col+1)
    printf("Tab_Idade[%i] = [%i]\n", col, TabIdade[col]);
  system("pause");
}
