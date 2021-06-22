/*QUEST�O 03: Pede-se a implementa��o de uma fun��o que, dado um vetor contendo n�meros reais, 
determine se o mesmo encontra-se ordenado de forma crescente. 
 */
 
 #include <stdio.h>
 #define QUANT 5
//declara��o de fun��es
void ordem_crescente (float vetor[]);

int main ()
{
	float valor[QUANT] = {0};
	int j;
	
	for (j=0 ; j < QUANT; j++)
	{
		printf("Insira um valor para Vetor[%d]:", j);
		scanf("%f", &valor[j]);
	} 

	ordem_crescente (valor);
	
}
void ordem_crescente (float vetor[])
{
	int i=0;
	
	while (i < QUANT - 1 && vetor [i] <= vetor [i+1])
	{
		i++;
	}	

	printf("valor de i = %d\n", i);


	if (i < QUANT-1)
	{
		printf("Nao esta em ordem crescente.");
	}
	else 
	{
		printf("Esta em ordem crescente.");
	}
	
} 
 
