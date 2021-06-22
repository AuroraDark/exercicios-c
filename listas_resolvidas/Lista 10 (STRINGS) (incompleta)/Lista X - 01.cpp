/* Questão 01: Suponha que não existissem as funções strlen, strcpy, strcat e strcmp. Pede-se, então, a implementação de funções que tenham o mesmo objetivo daquelas.  */

#include <stdio.h>

//declarando funções

void strlen2 (char s1 []);
void strcpy2 (char s1 [], char s2 []);
void strcat2 (char s1 [], char s2 []);
void strcmp2 (char s1 [], char s2 []);

int main ()
{
	char nome [20] = {"Andressa"}, sobrenome [20] = {"Pereira"};
	strlen2 (nome);
	strcpy2 (nome, sobrenome);
	strcat2 (nome, sobrenome);
	strcmp2 (nome, sobrenome);
}

void strlen2 (char s1 []) //define o tamanho de uma string (FUNCIONANDO)
{
	int i = 0; 
	
	while (s1 [i] != '\0')
	{
		i++;
	}
	
	printf ("Tamanho da string %s eh: %d", s1, i);
}

void strcpy2 (char s1 [], char s2 []) //copia o valor de uma string para outra (FUNCIONANDO)
{
	int i=0;
	
	while (s1 [i] != '\0')
	{
		s2 [i] = s1 [i];
		i++;
	}
	
	
	s2 [i] = '\0';
	printf ("S1 = %s e S2 = %s, valor do i %d ", s1, s2, i);
}

void strcat2 (char s1 [], char s2 []) //concatena strings (FUNCIONANDO)
{
	int i=0, j=0;
	char s3 [20];
	while (s1 [i] != '\0')
	{
		s3 [i] = s1 [i];
		i++;
	}
	
	while (s2 [j] != '\0')
	{
		s3 [j+i] = s2 [j];
		j++;
	}
	s3 [j+i] = '\0';	
	
	printf ("\n Nome e sobrenome = %s", s3);	
}

void strcmp2 (char s1 [], char s2 []) //compara duas strings (retorna 0 se forem iguais)
{
	int i=0;
	
	while (s1 [i] == s2 [i] && s1 [i] != '\0' && s2 [i] != '\0')
	{
		i++;
		printf ("%d", i);
	}
	
	if (s1 [i] == '\0' && s2 [i] == '\0')
	{
		printf ("Sao iguais !");
	}
	else 
	{
		printf ("Nao sao iguais !");
	}
}

