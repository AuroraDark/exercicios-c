/*QUEST�O 06:
Criar um programa que exiba os N primeiros termos da seguinte s�rie:
						1,2,8,64,1024,...*/

#include <stdio.h>

int main ()
{
	//Declara��o de vari�veis
	int i, n, termo, razao;
	
	//Leitura dos dados de entrada
	printf ("Entre com a quantidade de termos: ");
	scanf ("%d", &n);
	
	//exibindo a s�rie
	termo = 1;
	razao = 2;
	printf ("Sequencia: ");
	for (i=1;i<=n;i++)
	{
		printf ("%d ", termo);
		termo = termo*razao;  
		razao*=2;
	}	
}
