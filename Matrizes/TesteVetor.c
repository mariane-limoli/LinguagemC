#include <stdio.h>

int main(){

  int vetor[5]={1020,1,0,-10,100};
  int i, soma=0;
  //printf("%p",vetor); imprimir endereço

  // para i=0;eqto i<5;soma 1 em i
  for (i=0;i<5;i++){
      printf("\n%d",vetor[i]);
      soma=soma+vetor[i];
      printf("\nSoma: %d",soma);
  }
  printf("\nSoma: %d",soma);

}
