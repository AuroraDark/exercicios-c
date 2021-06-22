#include <stdio.h>

int fat (int n);

int main ()
{
	int valor, resultado;
	
	printf ("Entre com o valor para descobrir seu fatorial\n");
	scanf ("%d",&valor);
	
	resultado = fat (valor);
	
	printf ("Resultado= %d",resultado);
}

int fat (int n)
{
	if(n>1)
	{
		return (n * fat(n-1));
	}
	else
	{
		return (1);
	}
	
}
