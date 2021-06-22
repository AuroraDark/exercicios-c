/*QUESTÃO 11:
Implementar um programa no qual o usuário informa um número e verifica-se se ele é um número 
triangular.
Obs.: Um número é triangular quando ele for resultado do produto de três números
consecutivos.

Exemplo: 24 = 2 x 3 x 4*/

#include <stdio.h>

int main ()
{
	//Declaração de variáveis
	int numero, a = 1, b = 2, c =3, produto;
	//leitura dos valores de entrada
	printf ("Entre com um numero: ");
	scanf ("%d", &numero);
	
	do
	{
		produto = a*b*c;
		
		a++;
		b++;
		c++;
	} 
	while (produto < numero);
	
	if (produto == numero)
	{
		printf ("O numero %d e triangular", numero);
	}
	else
	{
		printf ("O numero %d nao e triangular", numero);
	}
}
