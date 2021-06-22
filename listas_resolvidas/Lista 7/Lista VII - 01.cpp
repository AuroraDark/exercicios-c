/*Lista 7 - Questão 1: 
Desenvolver uma função que exiba os multiplos de N compreendidos no intervalo definido por A e B */
#include <stdio.h>

void multiplos_de_n (int n, int a, int b)
{
	//var
	int i;
	
	//function
	
	printf ("Os multiplos de %d entre %d e %d sao:\n", n, a, b);
	
	for (i=a ; i<=b ; i++)
	{
		if (i % n == 0)
		{
			printf ("%d\n", i);
		}
	}
}

int main ()
{
	//var
	
	int valor, A, B;
	
	//prog
	
	printf ("Entre com o valor de N: \n");
	scanf ("%d", &valor);
	
	printf ("Defina os limites, A (inferior) e B (superior):");
	scanf ("%d", &A);
	scanf ("%d", &B);
	
	//printf ("%d %d", A, B);
	multiplos_de_n (valor, A, B);
}
