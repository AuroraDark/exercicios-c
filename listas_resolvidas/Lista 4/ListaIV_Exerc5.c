/*QUEST�O 05:
Criar um programa que exiba os N primeiros termos da seguinte s�rie:
							1,2,4,8,16,32,...*/

#include <stdio.h>

int main ()
{
	//Declara��o de vari�veis
	int i, n, termo;
	
	//Leitura dos dados de entrada
	printf ("Entre com a quantidade de termos: ");
	scanf ("%d", &n);
	
	//exibindo a s�rie
	termo = 1;
	printf ("Sequencia: ");
	for (i=1;i<=n;i++)
	{
		printf ("%d ", termo);
		termo = termo*2;  //termo *= 2;
	}	
}
