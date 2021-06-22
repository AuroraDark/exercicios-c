/*QUESTÃO 01:
Dado um número inteiro N, fazer um programa que exiba os números pares iguais ou inferiores 
a N. */

#include <stdio.h>

int main ()
{
	//Declaração de variáveis
	int N, y;
	
	//Leitura dos dados de entrada
	printf ("Entre com um numero inteiro: ");
	scanf ("%d", &N);
	
	//exibindo os pares inferiores ou iguais a N
	for (y=N;y>0;y--)
	{
		if (y%2==0)
		{
			printf ("%d ", y);
		}
	}
}
