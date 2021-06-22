/*QUESTÃO 07: Implementar uma função que, dado um número inteiro n, 
e o intervalo definido pelos números a e b, determine quantos valores
 do intervalo possuem divisores (sendo estes diferentes de 1) que também 
 sejam divisores de n. */
 
 #include <stdio.h>
 
void divisores_iguais (int n, int a, int b)
{
	//var
	int v, i, cont=0;
	
	for (v=a ; v<=b ; v++)
	{
		for (i=2 ; i<=v ; i++)
		{
			if (v%i==0 && n%i==0)
			{
				cont++;
				printf("%d %d \n", v, cont);	
			}
		}
	}
	printf("%d \n", cont);
}

 int main ()
 {
 	//var
 	int numero, limite_A, limite_B;
 	
 	printf("Entre com um numero:\n");
 	scanf("%d",&numero);
 	printf("Entre com os valores dos limites A (inferior) e B(superior):\n");
 	scanf("%d",&limite_A);
 	scanf("%d",&limite_B);
 	
 	divisores_iguais (numero, limite_A, limite_B);
 } 
 
