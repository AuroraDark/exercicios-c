//QUESTÃO 06: Faça uma função que, dado um vetor de reais, altere todas as ocorrências do número A pelo número B. 
 
#include <stdio.h>
#include <ctype.h>
#define QUANT 10000

void substituir (int valor_a, int valor_b, int cont, float numeros []);
 
int main ()
{
	float  valores [QUANT] = {0};
	int i = 0, a, b;
	char opcao;
	
	printf ("Entre com o valor a ser substuido: ");
	scanf ("%d", &a);
	
	printf ("Entre com o novo valor: ");
	scanf ("%d", &b);
		
	do 
	{
		printf ("Entre com um valor: ");
		scanf ("%f", &valores[i]);
		i++;
		
		do  //validando se a opcao é S ou N. Enquanto não for, mensagem de erro será exibida e um novo valor solicitado
		{
			fflush (stdin);
			printf ("Deseja inserir mais valores (S/N)? ");
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
	
	substituir (a, b, i, valores);
}

void substituir (int valor_a, int valor_b, int cont, float numeros [])
{
	int i;
	
	printf("Numeros antes: ");
	
	for (i=0 ; i<cont ; i++)
	{
		printf("%.1f, ", numeros[i]);
	}

	printf("Numeros depois ");

	for (i=0 ; i<cont ; i++)
	{
		if (numeros[i] == valor_a)
		{
			numeros[i] = valor_b;
		}
		
		printf("%.1f, ", numeros[i]);
	}
	
}
 
