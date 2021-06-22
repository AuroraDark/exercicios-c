/*
Lista de Exercícios VI

QUESTÃO 05: Uma pesquisa foi feita coletando informações (idade, 
altura e peso) de um grupo de pessoas.

Pede-se a implementação de um programa que proceda com a leitura 
de tais informações (até que o usuário opte por concluir a entrada 
de dados) e calcule:

- A quantidade de pessoas com idade superior a 50 anos;
- A média de altura das pessoas com mais de 80 kg;
- O maior peso dentre as pessoas acima de 1.65 m de altura e 
com idade inferior a 30 anos.
*/

//Importação de bibliotecas
#include <stdio.h>

//main
int main ()
{
	//declaração de variáveis
	int idade, total50=0, total80=0;
	float altura, peso, maiorPeso=0, somaAltura=0;
	char opcao;
	
	do
	{
		//Leitura dos dados de cada pessoa
		printf ("Idade: ");
		scanf ("%d", &idade);
		
		printf ("Altura: ");
		scanf ("%f", &altura);
		
		printf ("Peso: ");
		scanf ("%f", &peso);
		
		
		//Quantidade de pessoas com idade superior a 50 anos
		if (idade > 50)
		{
			total50++;
		}
		
		//Para o cálculo da média de altura das pessoas com mais de 80 kg
		if (peso > 80)
		{
			total80++;
			somaAltura += altura;
		}
		
		//Maior peso dentre as pessoas acima de 1.65 m de altura 
		//e com idade inferior a 30 anos.
		if ((altura > 1.65) && (idade < 30) && (peso > maiorPeso))
		{
			maiorPeso = peso;
		}
		
		fflush (stdin);
		printf ("Deseja continuar (S/N)?");
		scanf ("%c", &opcao);
		opcao = toupper (opcao);
	}
	while (opcao == 'S');

	//Exibindo os resultados	
	printf ("Quantidade de pessoas com idade superior a 50 anos: %d\n", total50);
	
	if (total80 == 0)
	{
		printf ("Nao ha pessoas com mais de 80 kg\n");
	}
	else
	{
		printf ("Média de altura das pessoas com mais de 80 kg: %.1f m\n", somaAltura/total80);
	}
	
	printf ("Maior peso dentre as pessoas acima de 1.65 m de altura e com idade inferior a 30 anos: %.1f kg\n", maiorPeso);	
}
