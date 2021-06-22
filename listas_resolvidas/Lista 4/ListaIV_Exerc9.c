/*QUESTÃO 09:
Escrever um programa que encontre o quinto número maior que 1000, cuja divisão por 11 tenha 
resto 5.*/

#include <stdio.h>

int main ()
{
	//Declaração de variáveis
	int cont = 0;
	int numero = 1000;
		
	do
	{
		numero++;
		
		if (numero % 11 == 5)
		{
			cont++;
			//printf ("Resposta = %d\n", numero);
		}
	}
	while (cont < 5);  //cont != 5
	
	printf ("Resposta = %d\n", numero);
}
