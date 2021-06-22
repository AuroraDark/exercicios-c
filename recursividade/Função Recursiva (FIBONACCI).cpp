//Fibonacci (1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...)

#include <stdio.h>

int fib(int termo);

int main ()
{
	int n, resultado;
	
	printf("Termo do fibonacci:");
	scanf("%d",&n);
	
	resultado=fib(n);
	
	printf("\n%d",resultado);
}

int fib(int termo)
{
	if(termo>2) //pois os dois primeiros termos do fibonacci são 1
	{
		return (fib(termo-1) + fib(termo-2));
	}
	else
	{
		return 1;
	}
}

