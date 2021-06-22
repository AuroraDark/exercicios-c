/* QUESTÃO 05: Elaborar uma função que, dado um conjunto de 300 valores inteiros, distribua-os em 2 vetores conforme forem pares ou ímpares. 
 */
 
#include <stdio.h>
#define QUANT 10
 
void dist_par_impar (int total [], int quant_pares, int quant_impares);

int main ()
{
	int todos_valores [QUANT] = {0};
	int i, cont_pares=0, cont_impares=0;
	
	for (i=0 ; i < QUANT ; i++)
	{
		printf ("Entre com um numero (inteiro): ");
		scanf ("%d", &todos_valores[i]);
		
		if (todos_valores[i] % 2 == 0)
		{
			cont_pares++;
		}
		else
		{
			cont_impares++;
		}
	}
	
	dist_par_impar (todos_valores, cont_pares, cont_impares);
}

 
void dist_par_impar (int total [], int quant_pares, int quant_impares)
{
	int j, l; 
	int valorPar = 0, valorImpar = 0; //contadores
	int pares [QUANT] = {0}, impares [QUANT] = {0}; //vetores par e impar
	
	for (j=0 ; j < QUANT ; j++)
	{
		if (total[j] % 2 == 0)
		{
			pares [valorPar] = total [j];
			valorPar++;
		}
		else
		{
			impares [valorImpar] = total [j];
			valorImpar++;			
		}
	}

    printf("Valores pares: ");
		
	for (j=0 ; j < quant_pares ; j++)
	{
		printf("%d, ", pares[j]);
	}
	
	printf("\nValores impares: ");
	
	for (l=0 ; l < quant_impares ; l++)
	{
		printf("%d, ", impares[l]);
	}

} 
