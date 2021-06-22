/*QUEST�O 07: Fa�a um programa que leia 150 n�meros reais e, ao final, exiba:
a) A soma dos 50 primeiros;
b) menor n�mero do 50� ao 100� valores fornecidos;
c) A m�dia entre os �ltimos 50 valores.*/

#include <stdio.h>

#define QUANT1 150

int main ()
{
	//Declara��o de vari�veis
	int i;
	float numero, soma1 = 0, soma2 = 0, menor, media;
	
	//lendo os primeiros 50 valores
	for (i=1;i<=QUANT1/3;i++)
	{
		printf ("Entre com um numero: ");
		scanf ("%f", &numero);
		soma1 += numero;
	}
	
	//lendo do 51o ao 100o valor
	printf ("Entre com um numero: ");
	//scanf ("%f", &numero);
	//menor = numero;
	scanf ("%f", &menor);
	
	for (i=2;i<=QUANT1/3;i++)
	{
		printf ("Entre com um numero: ");
		scanf ("%f", &numero);
		
		//verificando se o novo numero � menor do que o at� ent�o armazenado
		if (numero < menor)
		{
			menor = numero;
		}
	}
	
	//lendo os �ltimos 50 valores
	for (i=1;i<=QUANT1/3;i++)
	{
		printf ("Entre com um numero: ");
		scanf ("%f", &numero);
		soma2 += numero;
	}
	
	//Exibindo os resultados
	printf ("Soma do primeiro bloco de valores: %.1f\n", soma1);
	printf ("Menor elemento do segundo bloco: %.1f\n", menor);
	printf ("Media dos elementos do terceiro bloco: %.1f\n", soma2/(QUANT1/3));
}
