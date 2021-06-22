

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int criar()
{
	FILE *p;
	int vetor[10]={0,1,2,3,4,5,6,7,8,9};
	int a=10;
	int i;
	
	p=fopen("arquivo.txt","w"); //fopen para abrir o arquivo na memória (nome do arquivo="arquivo"), e o parametro: W=write;
	
	for(i=0;i<9;i++)
	{
		fprintf(p,"%d",vetor[i]); //escreve no arquivo
	}
	
	fclose(p); //fecha e salva o arquivo	
}

int ler()
{
	FILE *p;
	int vetor[9];
	int i;
		
	p=fopen("arquivo","r"); //abrindo o arquivo para ler "read"
	
	for(i=0;i<9;i++)
	{
		fscanf(p,"%d",&vetor[i]);//ler do arquivo p, um numero inteiro, e armazena em vetor[i];
		printf("%d",vetor[i]); //exibe o valor lido
	}
	
	fclose(p);
		
}

int main()
{
	int opcao;
	
	printf("Digite 1 para criar arquivo.txt\nDigite 2 para ler arquivo.txt");
	scanf("%d",&opcao);
	
	if(opcao==1)
	{
		criar();
	}
	else
	{
		if(opcao==2)
		{
			ler();
		}
	}
}
