/*
Lista de Exercícios VI

QUESTÃO 02: Um fazendeiro realizou um tratamento sobre sua 
plantação de café que gerou um crescimento constante de C % em 
sua produção, por ano.

Considerando que atualmente sua produção anual seja de M u.p.,
implementar um programa que determine a quantidade de anos 
necessária para que a produção duplique.
*/

//Importação de bibliotecas
#include <stdio.h>

//main
int main ()
{
	//declaração de variáveis
	float M, C, prod, conta;
	int anos = 0;
	
	//Leitura dos dados 
	printf ("Entre com a producao atual: ");
	scanf ("%f", &M);
	
	printf ("Entre com o crescimento atual: ");
	scanf ("%f", &C);
	
	//calculando a quantidade de anos para que a producao duplique
	prod = M;
	conta = M*2;
	
	do
	{
		prod += prod*(C/100);
		anos++;
	}
	while (prod < conta);
	
	//Exibir o resultado
	printf ("Foram necessarios %d anos para a producao duplicar (%.2f)", anos, prod);
}
