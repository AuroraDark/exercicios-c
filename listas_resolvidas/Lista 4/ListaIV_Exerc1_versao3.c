/*QUEST�O 01:
Dado um n�mero inteiro N, fazer um programa que exiba os n�meros pares iguais ou inferiores 
a N. */

#include <stdio.h>

int main ()
{
	//Declara��o de vari�veis
	int N, y;
	
	//Leitura dos dados de entrada
	printf ("Entre com um numero inteiro: ");
	scanf ("%d", &N);
	
	//exibindo os pares inferiores ou iguais a N
	for (y=2;y<=N;y+=2)
	{
		printf ("%d ", y);
	}
}
