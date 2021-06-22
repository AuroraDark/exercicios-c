/*QUEST�O 06: Fa�a um programa que leia 200 n�meros inteiros. Ao final, exibir:

a) O maior n�mero fornecido, de ordem par (isto �, o maior dentre o segundo, quarto, sexto, 
oitavo, etc valores fornecidos).
b) A m�dia dos valores pares.*/

#include <stdio.h>

#define QUANT 200

int main ()
{
	//Declara��o de vari�veis
	int i, valor, somaPar = 0, maior = -9999, contPar = 0;
	
	//Leitura dos elementos
	for (i=1;i<=QUANT;i++)
	{
		printf ("Entre com um numero: ");
		scanf ("%d", &valor);
		
		//verificando o maior elemento de ordem par
		if (i%2==0)  //ordem � par
		{
			if (valor > maior)
			{
				maior = valor;
			}
		}
		
		//somando todos os pares
		if (valor%2==0)
		{
			somaPar += valor;
			contPar++;
		}
	}
	
	//Exibindo os resultados
	printf ("Maior de ordem par = %d\n", maior);
	printf ("Media dos pares = %.1f", (float)somaPar/contPar);
}
