//AVF FPR - Questão 2

#include <stdio.h>

int fib(int termo);
int quant=0;

int main ()
{
	int n, resultado;
	
	printf(">>>Termo do fibonacci:");
	scanf("%d",&n);
	
	resultado=fib(n);
	
	printf("\n>>>Fib(%d)= %d\n",n,resultado);
	printf("\n>>>Chamadas Recursivas= %d\n",quant-1);// 
}


int fib(int termo)
{
	quant++;
//    printf("\nchamado: %d \n", quant);
    
	if(termo>2) //pois os dois primeiros termos do fibonacci são 1
	{
		quant++;
		return (fib(termo-1) + fib(termo-2));

	}
	else
	{
		quant++;
		return 1;
	}
}


	

