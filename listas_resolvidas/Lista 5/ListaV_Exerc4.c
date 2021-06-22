/*QUEST�O 04: A prefeitura de uma cidade fez uma pesquisa com 300 de seus habitantes, 
coletando dados sobre o sal�rio e n�mero de filhos. A prefeitura deseja saber:
a) m�dia do sal�rio da popula��o;
b) m�dia do n�mero de filhos;
c) maior sal�rio;
d) percentual de pessoas com sal�rio at� R$ 1.000,00. */

#include <stdio.h>

#define HAB 300

int main ()
{
	//Declara��o de vari�veis
	int i, numFilhos, somaFilhos=0, cont1000=0;
	float salario, somaSalario=0, maior=0;
	
	//Leitura dos dados de cada um dos habitantes
	for (i=1;i<=HAB;i++)
	{
		printf ("Salario: ");
		scanf ("%f", &salario);
		
		printf ("Numero de filhos: ");
		scanf ("%d", &numFilhos);
		
		//somando todos os sal�rios e todas as quantidades de filhos para, ao final, calcular as m�dias
		somaSalario += salario;
		somaFilhos += numFilhos;
		
		//verificando o maior sal�rio
		if (salario > maior)
		{
			maior = salario;
		}
		
		//contabilizando o total de funcion�rios com sal�rio at� R$ 1000,00
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
