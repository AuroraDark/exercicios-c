/*QUEST�O 04: Fazer uma fun��o que armazene em um vetor os 50 primeiros termos da seguinte sequ�ncia: 
 
S = 1, 2, 4, 7, 11, 16, ... 
 
Nota: observem que a diferen�a entre o 1� e 2� elementos � igual a 1, entre o 2� e 3� � igual a 2, entre o 3� e o 4� � igual a 3, e assim sucessivamente. */
#include <stdio.h>
#define QUANT 50

//declara��o de fun��es
void sequencia (int vetor []);

int main ()
{
	int valores [QUANT] = {0};
	
	sequencia (valores);
} 

void sequencia (int vetor [])
{
	int i=1;
	
	vetor [0] = 1; 
	do
	{
		vetor[i] = vetor[i-1] + i;
		i++;
	
	}while(i!=QUANT);
	
	for (i=0 ; i<QUANT ; i++)
	{
		printf ("%d, ", vetor[i]);	
	}
}



