/*QUEST�O 05: Elabore um programa que calcule a m�dia ponderada de n elementos.

Observa��o: na m�dia ponderada, cada elemento possui um peso que representa a
sua contribui��o no c�lculo da m�dia final.*/

#include <stdio.h>

int main ()
{
	//Declara��o de vari�veis
	int n, i;
	float valor, peso, somaProd = 0, somaPesos = 0;
	
	//Leitura da quantidade de valores
	printf ("Entre com a quantidade de valores: ");
	scanf ("%d", &n);

	//Leitura dos n valores e de seus respectivos pesos
	for (i=1;i<=n;i++)
	{
		printf ("Valor: ");
		scanf ("%f", &valor);
		
		printf ("Peso: ");
		scanf ("%f", &peso);
		
		//acumulando as somas
		somaProd += valor*peso;
		somaPesos += peso;
	}
	
	//Exibindo a media
	printf ("Media = %.2f", somaProd/somaPesos);

}
