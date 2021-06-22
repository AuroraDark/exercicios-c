/*QUESTÃO 07:
Desenvolver um programa no qual o usuário entre com vários números inteiros e positivos 
e imprima o produto dos números ímpares e a soma dos números pares. */

#include <stdio.h>

int main ()
{
	//Declaração de variáveis
	int num, somaP=0, prodI=1;
	char opcao;
	
	do
	{
		do   //validando o numero. Enquanto o numero for não positivo, uma mensagem de erro sera exibida e um novo valor solicitado
		{
			printf ("Entre com um numero: ");
			scanf ("%d", &num);
			
			if (num <= 0)  //validando o numero
			{
				printf ("Valor invalido! Tente novamente.\n\n");
			}
		}
		while (num <= 0);
		
		if (num%2==1) //verificando se é ímpar
		{
			prodI = prodI * num;
		}
		else
		{
			somaP = somaP + num;			
		}		
		
		do  //validando se a opcao é S ou N. Enquanto não for, mensagem de erro será exibida e um novo valor solicitado
		{
			fflush (stdin);
			printf ("Deseja continuar (S/N)? ");
			scanf ("%c", &opcao);
			opcao = toupper (opcao);
			
			if ((opcao != 'N') && (opcao != 'S'))  //validando a opcao
			{
				printf ("Opcao invalida! Tente novamente.\n\n");
			}			
		}
		while ((opcao != 'N') && (opcao != 'S'));
	
	}
	while (opcao == 'S');  //o programa vai parar quando o usuário digitar N (não deseja continuar)
	
	//Exibindo os resultados
	printf ("Soma dos pares = %d\n", somaP);
	printf ("Produto dos impares = %d\n", prodI);
}
