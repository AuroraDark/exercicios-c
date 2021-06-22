/*QUESTÃO 04: Fazer uma função que armazene em um vetor os 50 primeiros termos da seguinte sequência: 
 
S = 1, 2, 4, 7, 11, 16, ... 
 
Nota: observem que a diferença entre o 1º e 2º elementos é igual a 1, entre o 2º e 3º é igual a 2, entre o 3º e o 4º é igual a 3, e assim sucessivamente. */
#include <stdio.h>
#define QUANT 50

//declaração de funções
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



