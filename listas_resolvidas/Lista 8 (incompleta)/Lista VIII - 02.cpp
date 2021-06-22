/*QUESTÃO 02: Implementar uma função que, dado um vetor de reais, troque o 1? e o 2? elementos, em seguida o 3? e o 4? elementos 
e assim sucessivamente, até se chegar ao final do vetor. */

#include <stdio.h>
#define QUANT 7

int main ()
{
	void troca_de_valor (float vetor[]);
	float valores [QUANT] = {0};
	int j;
	
	for (j=0 ; j<= QUANT-1 ; j++)
	{
		printf("Insira um valor para vetor [%d] :", j);
		scanf ("%f", &valores[j]);
	}
	
	troca_de_valor (valores);
}
 void troca_de_valor (float vetor[])
{
	int i, l, m;
	float temporario;

    printf ("Posicao dos valores ANTES da funcao:\n"); //Exibindo valores antes de trocar de posição

	for (i=0 ; i<=QUANT-1 ; i++)
	{
		printf ("Vetor [%d] = %.2f \n", i, vetor[i]);
	}	

	for (l=0 ; l<=QUANT-2 ; l+=2)  //Trocando os valores de posição
	{
		temporario = vetor[l];
		vetor[l] = vetor[l+1];
		vetor[l+1] = temporario;
	}

	printf ("Posicao dos valores DEPOIS da funcao:\n"); //Exibindo valores depois de trocar de posição
		
	for (m=0 ; m<=QUANT-1 ; m++)
	{
		printf ("Vetor [%d] = %.2f\n", m, vetor[m]);
	}

}

