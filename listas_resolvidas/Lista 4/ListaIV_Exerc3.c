/*QUESTÃO 03:
Fazer um programa que exiba todos os divisores de um número fornecido pelo usuário.*/

#include <stdio.h>

int main ()
{
	//Declaração de variáveis
	int i, N;
	
	//Leitura dos dados de entrada
	printf ("Entre com um numero inteiro: ");
	scanf ("%d", &N);
	
	//verificando os divisores do número
	for (i=1;i<=N;i++)
	{
		if (N%i==0)  //verificando se i é divisor de N
		{
			printf ("%d ", i);
		}
	}	
}
