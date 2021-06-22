/*QUESTÃO 08:
Fazer um programa que auxilie o orgão regulador no cálculo do total de recursos arrecadados 
com a aplicação de multas de trânsito.
O programa deve ler as seguintes informações para cada motorista:
- O número da carteira de motorista;
- Número de multas;
- Valor de cada uma das multas.

Deve ser exibido o valor da dívida de cada motorista e ao final da leitura o total de
recursos arrecadados (somatório de todas as multas). O programa também deverá apresentar o 
número da carteira do motorista que obteve o maior número de multas. */

#include <stdio.h>

int main ()
{
	//Declaração de variáveis
	char opcao;
	int i, cnh, maiorCNH, nMultas, maior=0;
	float valor, totalArrecadado = 0, divida;
		
	do
	{
		//leitura dos dados de cada motorista
		printf ("Numero da carteira: ");
		scanf ("%d", &cnh);
		
		printf ("Quantidade de multas: ");
		scanf ("%d", &nMultas);
		
		//verificando se é o maior número de multas
		if (nMultas > maior)
		{
			maior = nMultas;
			maiorCNH = cnh;
		}
		
		//lendo o valor de cada multa
		divida = 0;
		for(i=1;i<=nMultas;i++)
		{
			printf ("Valor da %da multa: ", i);
			scanf ("%f", &valor);
			
			divida += valor;
		}
		
		totalArrecadado += divida;
		
		//Exibindo a dívida do motorista
		printf ("Motorista de carteira %d: divida de R$ %.2f\n", cnh, divida);
		
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
	printf ("\n\nTotal arrecadado com multas: R$ %.2f\n", totalArrecadado);
	printf ("Maior numero de multas: %d - Motorista %d", maior, maiorCNH);
}
