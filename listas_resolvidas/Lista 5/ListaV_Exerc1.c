/*QUESTÃO 01: Faça um programa que leia um número inteiro x e, em seguida, solicite ao 
usuário outros 50 valores inteiros. Ao final, o programa deve exibir o total de múltiplos 
de x fornecidos.*/

#include <stdio.h>

#define QUANT 50

int main ()
{
	//Declaração de variáveis
	int x, i, numero, cont = 0;

	//Leitura do valor de x
	printf ("Entre com um numero inteiro: ");
	scanf ("%d", &x);
	
	//Lendo os 50 valores
	for (i=1;i<=QUANT;i++)
	{
		printf ("Entre com um numero: ");
		scanf ("%d", &numero);
		
		//verificando se o número lido é multiplo de x 
		if (numero % x == 0)
		{
			cont++;
		}
	}
	
	//Exibindo o resultado
	printf ("Foram fornecidos %d multiplos de %d", cont, x);
}
