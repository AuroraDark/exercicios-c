/*QUEST�O 01: Fa�a um programa que leia um n�mero inteiro x e, em seguida, solicite ao 
usu�rio outros 50 valores inteiros. Ao final, o programa deve exibir o total de m�ltiplos 
de x fornecidos.*/

#include <stdio.h>

#define QUANT 50

int main ()
{
	//Declara��o de vari�veis
	int x, i, numero, cont = 0;

	//Leitura do valor de x
	printf ("Entre com um numero inteiro: ");
	scanf ("%d", &x);
	
	//Lendo os 50 valores
	for (i=1;i<=QUANT;i++)
	{
		printf ("Entre com um numero: ");
		scanf ("%d", &numero);
		
		//verificando se o n�mero lido � multiplo de x 
		if (numero % x == 0)
		{
			cont++;
		}
	}
	
	//Exibindo o resultado
	printf ("Foram fornecidos %d multiplos de %d", cont, x);
}
