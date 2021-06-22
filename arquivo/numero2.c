/*
2)Entrada: Nome do arquivo
Saída: printar o nome do inteiro
*/
#include<stdio.h>
#include<string.h>

int main()
{
	
	FILE *p;
	char arquivo [20];
	int i,n,a;
	
	printf("Entre com o nome do arquivo: ");
	
	gets(arquivo);
	
	p=fopen(arquivo,"r");
	
	fscanf(p,"%d %d", &n,&a);
	printf("%d %d\n",n,a);
	
	int vetor[n];
	
	for(i=0;i<n;i++)
	{
		fscanf(p,"%d ",&vetor[i]);
		printf("%d ",vetor[i]);
	}
	
	fclose(p);
}
