/*
Lista de Exerc�cios VI

QUEST�O 04: Fa�a um programa que leia um n�mero inteiro N e 
informe se o mesmo � ou n�o primo.

Nota: um n�mero � dito primo quando for divis�vel apenas por 
1 e por ele mesmo.

*/

//Importa��o de bibliotecas
#include <stdio.h>

//main
int main ()
{
	//declara��o de vari�veis
	int n, cont = 0, i;
	
	//Leitura do valor
	printf ("Entre com o numero: ");
	scanf ("%d", &n);
	
	//verificando se o n�mero � primo
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
