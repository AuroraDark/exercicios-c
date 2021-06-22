/*QUESTÃO 04: A prefeitura de uma cidade fez uma pesquisa com 300 de seus habitantes, 
coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:
a) média do salário da população;
b) média do número de filhos;
c) maior salário;
d) percentual de pessoas com salário até R$ 1.000,00. */

#include <stdio.h>

#define HAB 300

int main ()
{
	//Declaração de variáveis
	int i, numFilhos, somaFilhos=0, cont1000=0;
	float salario, somaSalario=0, maior=0;
	
	//Leitura dos dados de cada um dos habitantes
	for (i=1;i<=HAB;i++)
	{
		printf ("Salario: ");
		scanf ("%f", &salario);
		
		printf ("Numero de filhos: ");
		scanf ("%d", &numFilhos);
		
		//somando todos os salários e todas as quantidades de filhos para, ao final, calcular as médias
		somaSalario += salario;
		somaFilhos += numFilhos;
		
		//verificando o maior salário
		if (salario > maior)
		{
			maior = salario;
		}
		
		//contabilizando o total de funcionários com salário até R$ 1000,00
		if (salario <= 1000)
		{
			cont1000++;
		}
	}
	
	//Exibindo os resultados
	printf ("Media salarial = R$ %.2f\n", somaSalario/HAB);
	printf ("Media do numero de filhos = %.1f\n", (float)somaFilhos/HAB);
	printf ("Maior salario = R$ %.2f\n", maior);
	printf ("Percentual de funcionarios que recebem ate R$ 1.000,00 = %.2f%%", ((float)cont1000/HAB)*100);
}
