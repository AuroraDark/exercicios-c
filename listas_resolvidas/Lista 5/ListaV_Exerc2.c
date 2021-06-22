/*QUESTÃO 02: Pede-se o desenvolvimento de um programa que leia n valores e determine o 
maior e o menor elementos do conjunto fornecido.*/

#include <stdio.h>

int main ()
{
	//Declaração de variáveis
	int n, i, numero, maior = -9999, menor = 9999;
	
	//Leitura do valor de n
	printf ("Entre com a quantidade de elementos que serao fornecidos: ");
	scanf ("%d", &n);
	
	//Lendo os n valores
	for (i=1;i<=n;i++)
	{
		printf ("Entre com um numero: ");
		scanf ("%d", &numero);
		
		//verificando se o elemento digitado é o maior
		if (numero > maior)
		{
			maior = numero;
		}
		else
		{
			if (numero < menor)
			{
				menor = numero;
			}
		}		
	}
	
	//Exibindo o resultado
	printf ("Maior = %d\nMenor = %d", maior, menor);
}
