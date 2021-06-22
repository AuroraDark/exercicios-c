/*

1)Entrada:
natural a: amplitude
natural n: quantidade de elementos
nome do arquivo:(string)
>>>Construir um vetor com n elementos variando entre 0 e a-1(randomicamente)
>>>Armazene em um arquivo(dinamico)

modelo do print

n a 
x1 x2 x3 x4 [...]

*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	FILE *p;
	int a, n,i;
	char arquivo[20];
	
	
	printf("Entre com o valor de a: \n");
	scanf("%d",&a);
	
	printf("Entre com o valor de n: \n");
	scanf("%d",&n);
	
	fflush(stdin);
	printf("Entre com o nome do arquivo:\n");
	gets(arquivo);
	
	{}
		int vet[n];
	
	
	for (i=0;i<n;i++)
	{
		vet[i]=(rand()%(a-1));
	}
	
	p=fopen(arquivo,"w");
	
	fprintf(p,"%d %d\n",n,a);
	
	for(i=0;i<n;i++)
	{
		fprintf(p,"%d ",vet[i]);
	}
	
	fclose(p);	
}
