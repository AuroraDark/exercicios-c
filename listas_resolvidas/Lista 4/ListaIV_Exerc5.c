/*QUESTÃO 05:
Criar um programa que exiba os N primeiros termos da seguinte série:
							1,2,4,8,16,32,...*/

#include <stdio.h>

int main ()
{
	//Declaração de variáveis
	int i, n, termo;
	
	//Leitura dos dados de entrada
	printf ("Entre com a quantidade de termos: ");
	scanf ("%d", &n);
	
	//exibindo a série
	termo = 1;
	printf ("Sequencia: ");
	for (i=1;i<=n;i++)
	{
		printf ("%d ", termo);
		termo = termo*2;  //termo *= 2;
	}	
}
