#include <stdio.h>
#include <stdlib.h>

  int main ()
{
	int vQtdeComodos, vClasseComodo, vAreaComodo, vLuminosidadeComodo;
	int vlampadasCasa=0, vluminosidadeCasa=0;
	int vLampadasComodo=0, i;
	 
	//int vLuminosidadePorClasse[5]={10,15,18,20,25};
	int vLuminosidadePorClasse[5][2]={{1,10},
	                                  {2,15},
									  {3,18},
									  {4,20},
									  {5,25}};	
	printf("Informe a Quantidade de Comodos \n");	
	scanf("%i", &vQtdeComodos);	
	for (i=0; i<vQtdeComodos; i++)
	{
		printf("Informe a Classe do Comodo %i \n", i+1);
		scanf("%i", &vClasseComodo);		
		printf ("Informe a Area do Comodo %i \n", i+1);
		scanf ("%i", &vAreaComodo);     
		
        vLuminosidadeComodo = vAreaComodo * vLuminosidadePorClasse[vClasseComodo-1][1];		  
		vLampadasComodo = vLuminosidadeComodo / 60;		  
		if (vLuminosidadeComodo %60 > 0)
		{
		  vLampadasComodo++;
		}
        printf("Luminosidade do Comodo %d: %d \n", i+1, vLuminosidadeComodo);          
        printf("Lampadas do Comodo %d: %d \n\n\n\n", i+1, vLampadasComodo);		
		vlampadasCasa+=vLampadasComodo;
		vluminosidadeCasa+=vLuminosidadeComodo;
    }
    printf("Luminosidade da casa %d: %d \n", i+1, vluminosidadeCasa);          
    printf("Lampadas da casa %d: %d \n\n\n\n", i+1, vlampadasCasa);		    	
}