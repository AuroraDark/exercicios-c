/* QUESTÃO 08: Desenvolver uma função que exiba todos os números primos inferiores a determinado valor inteiro N.  */

#include <stdio.h>

void primos (int n)
{
	//var
	int v, i, cont=0, contprimos=0;
	
	for (v=1 ; v<=n ; v++)
	{
		//printf( " valor de v no primeiro for  %d \n", v);
		for (i=1 ; i<=v ; i++)
		{ //printf( " valor de i no no segundo for  %d \n", i);
			if (v%i==0)
			{  // printf( " valor de v no primeiro if %d \n", v);
				//printf( " valor de i divisor de %d : %d  \n", v, i);
				cont++;	
				//printf( " valor do cont %d \n", cont);
			}
			
		}
		if (cont == 2)
			{
				printf("Valor do numero primo %d \n", v);
				contprimos++;
			}
		cont=0;
		
	}printf("Numero de primos ate %d = %d", n, contprimos);
}

 int main ()
 {
 	//var
 	int numero;
 	
 	printf("Entre com um numero:\n");
 	scanf("%d",&numero);
 	
 	primos (numero);
 } 

