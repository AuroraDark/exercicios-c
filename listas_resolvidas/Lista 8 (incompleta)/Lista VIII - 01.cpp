/*QUESTÃO 01: Desenvolver uma função que determine o número de ocorrências de um número inteiro x em um vetor A. */
 #include <stdio.h>
 #define QUANT 7
//versão que printa dentro da função

void numero_ocorrencias (int x, int a[])
 {
 	int i, cont=0;
 	
 	for (i=0; i<QUANT ; i++)
 	{
 		if (x == a[i])
 		{
 			cont ++;
		}
	}
	printf("Numero de ocorrencias: %d\n", cont);
 }
 
 int main ()
 {
 	int numero, vetor[QUANT] = {0,5,6,5,5,6,5};
 	
 	printf("Entre com um numero:\n");
 	scanf("%d", &numero);
 	
 	numero_ocorrencias (numero, vetor);
 }
 
 //versão que printa fora da função
 
 /*
 int numero_ocorrencias (int x, int a[])
 {
 	int i, cont=0;
 	
 	for (i=0; i<QUANT ; i++)
 	{
 		if (x == a[i])
 		{
 			cont ++;
		}
	}
	return cont;
 }
 
 int main ()
 {
 	int ocorrencias, numero, vetor[QUANT] = {0,5,6,5,5,6,5};
 	
 	printf("Entre com um numero:\n");
 	scanf("%d", &numero);
 	
 	ocorrencias = numero_ocorrencias (numero, vetor);
 	printf("Numero de ocorrencias: %d\n", ocorrencias);
 }
 
