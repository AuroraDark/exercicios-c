/*QUESTÃO 09: Implementar uma função que, dado um número inteiro, calcule (e retorne) a soma e a média de seus divisores.*/ 
 
#include <stdio.h>

void soma_media (int n, int *soma, float *media)
{
	int i, cont=0; //variaveis
	
	for (i=0 ; i<=n ; i++) //programa
	{
		if (n%i == 0)
		{
			cont++;
			*soma = *soma + i;
		}
	} *media = *soma/cont;
}

int main ()
{
	int numero, soma_div = 0;
	float media_div = 0;
	
	printf("Entre com um numero: \n");
	scanf("%d", &numero);
	
	soma_media (numero, &soma_div, &media_div);
	
	printf ("Soma dos divisores de %d = %d \n Media dos divisores de %d = %.1f \n", numero, soma_div, numero, media_div);
	
} 
