/*QUEST�O 03: Implementar um programa que calcule o valor de base elevado a expoente, onde
base e expoente s�o n�meros inteiros dados pelo usu�rio.*/

//calculando a potencia tamb�m para expoentes negativos

#include <stdio.h>

int main ()
{
	//Declara��o de vari�veis
	int base, exp, expoente, i, negativo = 0;
	float potencia =1;
	
	//Leitura dos valores da base e do expoente
	printf ("Entre com a base: ");
	scanf ("%d", &base);
	
	printf ("Entre com o expoente: ");
	scanf ("%d", &exp);
	
	//testando se o expoente � negativo
	if (exp < 0)
	{
		negativo = 1;
		expoente = -exp;
	}
	else
	{
		expoente = exp;
	}
	
	//calculando o valor da pot�ncia
	for (i=1;i<=expoente;i++)
	{
		potencia = potencia*base;
	}

	//corrigindo o resultando caso o expoente seja negativo
	if (negativo == 1)
	{
		potencia = 1/potencia;
	}

	//Exibindo o resultado
	printf ("%d elevado a %d = %.3f", base, exp, potencia);
}
