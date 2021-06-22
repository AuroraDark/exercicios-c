/*Lista 7 - Quest�o 5: 
Fazer uma fun��o que calcule o MMC entre dois n�meros */

#include <stdio.h>

void calcular_mmc (int x, int y)
{
	int mmc, i;
	
	i = x*y;
	
	if (x > y)
	{
		do
		{
		   if (i%x == 0 && i%y == 0)
		   {
				mmc = i;
		   }
		   
		   i--; 
		}
		while (i >= x);
	}
	else
	{
		if (x < y)
		{
			do
			{
			   if (i%x == 0 && i%y == 0)
			   {
					mmc = i;
			   }
			   
			   i--; 
			}
			while (i >= y);
			
		}
		else 
		{
		  mmc = x;
		}
	}
	printf ("O mmc entre %d e %d e: %d", x, y, mmc);
}

int main ()
{
	int valorx , valory ;
	
	printf("Entre com dois numeros:");
	scanf("%d", &valorx);
	scanf("%d", &valory);
	
	calcular_mmc (valorx, valory);
}

