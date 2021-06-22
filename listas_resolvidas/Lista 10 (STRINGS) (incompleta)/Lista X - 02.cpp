/*Questão 02: Dada uma string s, desenvolver uma função que determine se s é ou não um palíndromo. 
 
Observação: uma string s será um palíndromo quando seus caracteres formarem a mesma sequência, independente se s é percorrida da esquerda para direita ou vice-versa.*/

#include <stdio.h>
#include <string.h>

void palindromo (int tamanho, char s1 []);

int main ()
{
	char s [20];
	int tam;
	
	printf ("Entre com uma palavra:");
	gets(s);
	
	tam = strlen(s);
	
	printf("Tamanho da palavra = %d\n",tam);
	
	palindromo (tam, s);
}

void palindromo (int tamanho, char s1 [])
{
	int i, j, iguais=0;

		for (i=0, j=tamanho-1; i<=tamanho-1; i++, j--)
		{
			if (s1 [i] == s1 [j])
			{
				iguais++;
			}
		} 
		
		
		if(iguais == tamanho)
		{
		    printf("Eh palindromo. iguais = %d i= %d j= %d ", iguais, i, j);			
	    }
		else
		{
			printf("Nao eh palindromo. iguais = %d i= %d j= %d ", iguais, i, j);
	    }   	
		
}
