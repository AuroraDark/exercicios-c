/*
Lista de Exerc�cios VI

QUEST�O 02: Um fazendeiro realizou um tratamento sobre sua 
planta��o de caf� que gerou um crescimento constante de C % em 
sua produ��o, por ano.

Considerando que atualmente sua produ��o anual seja de M u.p.,
implementar um programa que determine a quantidade de anos 
necess�ria para que a produ��o duplique.
*/

//Importa��o de bibliotecas
#include <stdio.h>

//main
int main ()
{
	//declara��o de vari�veis
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
