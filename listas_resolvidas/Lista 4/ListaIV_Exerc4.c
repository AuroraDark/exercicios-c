/*QUEST�O 04:
Implementar um programa que exiba os N primeiros termos de uma PA (Progress�o Aritm�tica) 
com primeiro termo a1 e raz�o r.*/

#include <stdio.h>

int main ()
{
	//Declara��o de vari�veis
	int i, n, a1, r, termo;
	
	//Leitura dos dados de entrada
	printf ("Entre com o primeiro termo da PA: ");
	scanf ("%d", &a1);
	
	printf ("Entre com a razao da PA: ");
	scanf ("%d", &r);
	
	printf ("Entre com a quantidade de termos da PA: ");
	scanf ("%d", &n);
	
	//exibindo a PA
	termo = a1;
	printf ("PA: ");
	for (i=1;i<=n;i++)
	{
		printf ("%d ", termo);
		termo = termo+r;  //termo += r;
	}	
}
