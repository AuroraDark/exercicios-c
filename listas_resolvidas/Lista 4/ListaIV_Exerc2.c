/*QUESTÃO 02:
Desenvolver um programa que calcule a soma dos números de 1 a N, sendo N um número inteiro 
fornecido pelo usuário.*/

#include <stdio.h>

int main ()
{
	//Declaração de variáveis
	int N, i, soma=0;
	
	//Leitura dos dados de entrada
	printf ("Entre com um numero inteiro: ");
	scanf ("%d", &N);
	
	//calculando a soma
	for (i=1;i<=N;i++)
	{
		soma = soma + i;  // ou  soma += i;		
	}	
	
	//exibir o resultado
	printf ("Soma = %d", soma);
}
