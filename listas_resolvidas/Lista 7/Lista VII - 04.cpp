/*Lista 7 - Questão 4: 
Fazer uma função que calcule o MDC entre dois números */

#include <stdio.h>

void calcular_mdc (int x, int y)
{
	int i, mdc; 
	
	if (x > y)
	{
		for (i=1 ; i <= y ; i++)
		{
			if( y%i == 0 && x%i == 0)
			{
				mdc = i;
			}
		}
	}
	else
	{
		if (x < y)
		{
			for (i=1 ; i <= x ; i++)
			{
				if( y%i == 0 && x%i == 0)
				{
					mdc = i;
				}
			}
			
		}
		else
		{
			mdc = x;
		}
	}
	printf ("\nO MDC entre %d e %d e: %d ", x, y, mdc);
}

int main ()
{
	int valorx , valory ;
	
	printf("Entre com dois numeros:");
	scanf("%d", &valorx);
	scanf("%d", &valory);
	
	calcular_mdc (valorx, valory);
}
