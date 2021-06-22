/*
Lista de Exercícios VI

QUESTÃO 04: Faça um programa que leia um número inteiro N e 
informe se o mesmo é ou não primo.

Nota: um número é dito primo quando for divisível apenas por 
1 e por ele mesmo.

*/

//Importação de bibliotecas
#include <stdio.h>

//main
int main ()
{
	//declaração de variáveis
	int n, cont = 0, i;
	
	//Leitura do valor
	printf ("Entre com o numero: ");
	scanf ("%d", &n);
	
	//verificando se o número é primo
	for (i=2;(i<=n/2)&&(cont==0);i++)
	{
		if (n%i==0)
		{
			cont++;
		}
	}
	
	if (cont > 0)
	{
		printf ("%d nao e primo!", n);
	}
	else
	{
		printf ("%d e primo!", n);
	}
	
}
