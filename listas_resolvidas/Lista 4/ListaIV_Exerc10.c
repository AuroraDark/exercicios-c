/*QUESTÃO 10:
Foi feita uma pesquisa entre os habitantes de uma região e coletados os dados de altura e 
sexo das pessoas. Faça um programa que leia as informações de 50 pessoas e informe:
- a maior e a menor alturas encontradas;
- a média de altura das mulheres;
- a média de altura da população;
- o percentual de homens na população.*/

#include <stdio.h>

#define QUANT 5

int main ()
{
	//Declaração de variáveis
	int i, contF=0, contM;
	float altura, maiorA = 0, menorA = 3, soma=0, somaTotal=0, percM;
	char sexo;
	
	for (i=1;i<=QUANT;i++)
	{
		//lendo as informações de cada pessoa
		printf ("Altura: ");
		scanf ("%f", &altura);
		
		fflush (stdin);
		printf ("Sexo (F/M): ");
		scanf ("%c", &sexo);
		sexo = toupper (sexo);	
		
		//verificando se a altura é a maior
		if (altura > maiorA)
		{
			maiorA = altura;
		}
		else
		{
			if (altura < menorA)
			{
				menorA = altura;
			}
		}
		
		//somando as alturas das mulheres
		if (sexo == 'F')
		{
			soma += altura;
			contF++;
		}
		
		//somando todas as alturas
		somaTotal += altura;
	}	
	
	//Exibindo os resultados
	printf ("Maior altura: %.2f\n", maiorA);
	printf ("Menor altura: %.2f\n", menorA);
	printf ("Media de altura das mulheres: %.2f\n", soma/contF);
	printf ("Media de altura da populacao: %.2f\n", somaTotal/QUANT);
	
	contM = QUANT-contF;		//total de homens
	percM = ((float)contM/QUANT)*100;	//percentual de homens
	printf ("Percentual de homens na populacao: %.2f%%\n", percM);
	
}
