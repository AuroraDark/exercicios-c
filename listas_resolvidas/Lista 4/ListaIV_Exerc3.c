/*QUEST�O 03:
Fazer um programa que exiba todos os divisores de um n�mero fornecido pelo usu�rio.*/

#include <stdio.h>

int main ()
{
	//Declara��o de vari�veis
	int i, N;
	
	//Leitura dos dados de entrada
	printf ("Entre com um numero inteiro: ");
	scanf ("%d", &N);
	
	//verificando os divisores do n�mero
	for (i=1;i<=N;i++)
	{
		if (N%i==0)  //verificando se i � divisor de N
		{
			printf ("%d ", i);
		}
	}	
}
