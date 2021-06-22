/*QUEST�O 08:
Fazer um programa que auxilie o org�o regulador no c�lculo do total de recursos arrecadados 
com a aplica��o de multas de tr�nsito.
O programa deve ler as seguintes informa��es para cada motorista:
- O n�mero da carteira de motorista;
- N�mero de multas;
- Valor de cada uma das multas.

Deve ser exibido o valor da d�vida de cada motorista e ao final da leitura o total de
recursos arrecadados (somat�rio de todas as multas). O programa tamb�m dever� apresentar o 
n�mero da carteira do motorista que obteve o maior n�mero de multas. */

#include <stdio.h>

int main ()
{
	//Declara��o de vari�veis
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
		
		//verificando se � o maior n�mero de multas
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
		
		//Exibindo a d�vida do motorista
		printf ("Motorista de carteira %d: divida de R$ %.2f\n", cnh, divida);
		
		do  //validando se a opcao � S ou N. Enquanto n�o for, mensagem de erro ser� exibida e um novo valor solicitado
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
	while (opcao == 'S');  //o programa vai parar quando o usu�rio digitar N (n�o deseja continuar)
	
	//Exibindo os resultados
	printf ("\n\nTotal arrecadado com multas: R$ %.2f\n", totalArrecadado);
	printf ("Maior numero de multas: %d - Motorista %d", maior, maiorCNH);
}
