/*QUEST�O 11:
Implementar um programa no qual o usu�rio informa um n�mero e verifica-se se ele � um n�mero 
triangular.
Obs.: Um n�mero � triangular quando ele for resultado do produto de tr�s n�meros
consecutivos.

Exemplo: 24 = 2 x 3 x 4*/

#include <stdio.h>

int main ()
{
	//Declara��o de vari�veis
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
