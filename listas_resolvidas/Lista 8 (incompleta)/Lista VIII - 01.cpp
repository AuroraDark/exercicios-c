/*QUEST�O 01: Desenvolver uma fun��o que determine o n�mero de ocorr�ncias de um n�mero inteiro x em um vetor A. */
 #include <stdio.h>
 #define QUANT 7
//vers�o que printa dentro da fun��o

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
 
 //vers�o que printa fora da fun��o
 
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
 
