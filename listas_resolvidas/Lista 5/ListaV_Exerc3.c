/*QUEST�O 03: Implementar um programa que calcule o valor de base elevado a expoente, onde
base e expoente s�o n�meros inteiros dados pelo usu�rio.*/

#include <stdio.h>

int main ()
{
	//Declara��o de vari�veis
	int base, exp, potencia=1, i;
	
	//Leitura dos valores da base e do expoente
	printf ("Entre com a base: ");
	scanf ("%d", &base);
	
	printf ("Entre com o expoente: ");
	scanf ("%d", &exp);
	
	//calculando o valor da pot�ncia
	for (i=1;i<=exp;i++)
	{
		potencia = potencia*base;
	}

	//Exibindo o resultado
	printf ("%d elevado a %d = %d", base, exp, potencia);
}
