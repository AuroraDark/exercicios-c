/*QUESTÃO 08: Faça um programa que leia um número real x e um número inteiro y. Em seguida, 
o programa deve ler 100 números reais e calcular quantos destes estão a uma “distância” de x 
de, no máximo, y.

Exemplo: suponha x = 10 e y = 2. O programa pede para calcular quantos dos 100 números 
fornecidos estão compreendidos entre 8.0 (a uma distância de 2 (y) antes de 10 (x)) e 12.0 
(a uma distância de 2 (y) depois de 10 (x))*/

#include <stdio.h>

#define QUANT 10

int main ()
{
	//Declaração de variáveis
	int y, i, cont=0;
	float valor, x, inf, sup;
	
	//lendo os valores de x e y
	printf ("Entre com os valores de x e y: ");
	scanf ("%f %d", &x, &y);
	
	//definindo os limites inferior e superior
	inf = x-y;
	sup = x+y;
	
	//Lendo os 100 valores
	for (i=1;i<=QUANT;i++)
	{
		printf ("Entre com um numero: ");
		scanf ("%f", &valor);
		
		//verificando se está no intervalo
		if ((valor >= inf) && (valor <= sup))
		{
			cont++;
		}
	}
	
	//exibindo o resultado
	printf ("Foram encontrados %d valores a uma distancia maxima de %d do valor %.1f", cont, y, x);
}
