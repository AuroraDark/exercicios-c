#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no
{
	int num;
	struct no *lista;
}Tno;

int main()
{
	
	FILE *arq;
	
	Tno vetor[10];
	
	char nomeArq[15];
	int i, n, cont;
	
	for(i=0;i<10;i++)
	{
		vetor[i].num = 0;
		vetor[i].lista = NULL;
	}
	
	printf("Digite o nome do arquivo com extencao:\n");
	scanf("%s", &nomeArq);
	
	arq=fopen(nomeArq, "r");
	
	fscanf(arq, "%d", &n);
	
	int vArq[n];
	
	for(i=0;i<n;i++)
	{
		fscanf(arq, "%d", &vArq[i]);
	}
	
	fclose(arq);
	
	for(i=0;i<n;i++)
	{
		Tno *novo = NULL;
		
		novo=malloc(sizeof(Tno));
		novo->num = vArq[i];
		vetor[1].num++;
		novo->lista = vetor[1].lista;
		vetor[1].lista = novo;
				
		if(vArq[i] % 2 == 0)
		{
			novo=malloc(sizeof(Tno));
			novo->num = vArq[i];
			vetor[2].num++;
			novo->lista = vetor[2].lista;
			vetor[2].lista = novo;
			cont++;
		}
		if(vArq[i] % 3 == 0)
		{
			novo=malloc(sizeof(Tno));
			novo->num = vArq[i];
			vetor[3].num++;
			novo->lista = vetor[3].lista;
			vetor[3].lista = novo;
			cont++;
		}
		if(vArq[i] % 4 == 0)
		{
			novo=malloc(sizeof(Tno));
			novo->num = vArq[i];
			vetor[4].num++;
			novo->lista = vetor[4].lista;
			vetor[4].lista = novo;
			cont++;
		}
		if(vArq[i] % 5 == 0)
		{
			novo=malloc(sizeof(Tno));
			novo->num = vArq[i];
			vetor[5].num++;
			novo->lista = vetor[5].lista;
			vetor[5].lista = novo;
			cont++;
		}
		if(vArq[i] % 6 == 0)
		{
			novo=malloc(sizeof(Tno));
			novo->num = vArq[i];
			vetor[6].num++;
			novo->lista = vetor[6].lista;
			vetor[6].lista = novo;
			cont++;
		}
		if(vArq[i] % 7 == 0)
		{
			novo=malloc(sizeof(Tno));
			novo->num = vArq[i];
			vetor[7].num++;
			novo->lista = vetor[7].lista;
			vetor[7].lista = novo;
			cont++;
		}
		if(vArq[i] % 8 == 0)
		{
			novo=malloc(sizeof(Tno));
			novo->num = vArq[i];
			vetor[8].num++;
			novo->lista = vetor[8].lista;
			vetor[8].lista = novo;
			cont++;
		}
		if(vArq[i] % 9 == 0)
		{
			novo=malloc(sizeof(Tno));
			novo->num = vArq[i];
			vetor[9].num++;
			novo->lista = vetor[9].lista;
			vetor[9].lista = novo;
			cont++;
		}
		if(cont == 0)
		{
			novo=malloc(sizeof(Tno));
			novo->num = vArq[i];
			vetor[0].num++;
			novo->lista = vetor[0].lista;
			vetor[0].lista = novo;
		}
		cont=0;
	}
	
	for(i=0;i<10;i++)
	{
		Tno *aux = NULL;
		
		printf("\n%d %d\n\n", i, vetor[i].num);
		
		aux = vetor[i].lista;
		
		while(aux != NULL)
		{
			printf("[%p] ---> (%4d, %p)\n", aux, aux->num, aux->lista);
			aux = aux->lista;
		}
		
	}
	
	
	system("pause");
	return 0;
}
