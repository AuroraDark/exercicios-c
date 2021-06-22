//AVF FPR - Questão 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no
{
	int num;
	struct no *lista;
	struct no *ant;
}Tno;

void ordenar(Tno *inicio,int n);

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
		vetor[i].ant = NULL;
	}
	
	printf("Nome do arquivo\n");
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
		cont=0;
		Tno *novo = NULL;
		
		novo=malloc(sizeof(Tno));
		novo->num = vArq[i];
		vetor[1].num++;
		novo->lista = vetor[1].lista;
		vetor[1].lista = novo;
		novo->ant=NULL;
		if(vetor[1].num>1)
		{
			novo->lista->ant=novo;			
		}
		ordenar(vetor[1].lista,vetor[1].num);

		
				
		if(vArq[i] % 2 == 0)
		{
			novo=malloc(sizeof(Tno));
			novo->num = vArq[i];
			vetor[2].num++;
			novo->lista = vetor[2].lista;
			vetor[2].lista = novo;
			novo->ant=NULL;
		if(vetor[2].num>1)
		{
			novo->lista->ant=novo;			
		}
			
			cont++;
	     ordenar(vetor[2].lista,vetor[2].num);			
		}
		if(vArq[i] % 3 == 0)
		{
			novo=malloc(sizeof(Tno));
			novo->num = vArq[i];
			vetor[3].num++;
			novo->lista = vetor[3].lista;
			vetor[3].lista = novo;
			novo->ant=NULL;
		if(vetor[3].num>1)
		{
			novo->lista->ant=novo;			
		}

			cont++;
	     ordenar(vetor[3].lista,vetor[3].num);
		}
		if(vArq[i] % 4 == 0)
		{
			novo=malloc(sizeof(Tno));
			novo->num = vArq[i];
			vetor[4].num++;
			novo->lista = vetor[4].lista;
			vetor[4].lista = novo;
			novo->ant=NULL;
		if(vetor[4].num>1)
		{
			novo->lista->ant=novo;			
		}

			cont++;
	      ordenar(vetor[4].lista,vetor[4].num);
		}
		if(vArq[i] % 5 == 0)
		{
			novo=malloc(sizeof(Tno));
			novo->num = vArq[i];
			vetor[5].num++;
			novo->lista = vetor[5].lista;
			vetor[5].lista = novo;
			novo->ant=NULL;
		if(vetor[5].num>1)
		{
			novo->lista->ant=novo;			
		}
						
			cont++;
		ordenar(vetor[5].lista,vetor[5].num);
	
		}
		if(vArq[i] % 6 == 0)
		{
			novo=malloc(sizeof(Tno));
			novo->num = vArq[i];
			vetor[6].num++;
			novo->lista = vetor[6].lista;
			vetor[6].lista = novo;
			novo->ant=NULL;
		if(vetor[6].num>1)
		{
			novo->lista->ant=novo;			
		}

			cont++;
		ordenar(vetor[6].lista,vetor[6].num);

		}
		if(vArq[i] % 7 == 0)
		{
			novo=malloc(sizeof(Tno));
			novo->num = vArq[i];
			vetor[7].num++;
			novo->lista = vetor[7].lista;
			vetor[7].lista = novo;
			novo->ant=NULL;
		if(vetor[7].num>1)
		{
			novo->lista->ant=novo;			
		}

			cont++;
		ordenar(vetor[7].lista,vetor[7].num);

		}
		if(vArq[i] % 8 == 0)
		{
			novo=malloc(sizeof(Tno));
			novo->num = vArq[i];
			vetor[8].num++;
			novo->lista = vetor[8].lista;
			vetor[8].lista = novo;
			novo->ant=NULL;
		if(vetor[8].num>1)
		{
			novo->lista->ant=novo;			
		}

			cont++;
		ordenar(vetor[8].lista,vetor[8].num);

		}
		if(vArq[i] % 9 == 0)
		{
			novo=malloc(sizeof(Tno));
			novo->num = vArq[i];
			vetor[9].num++;
			novo->lista = vetor[9].lista;
			vetor[9].lista = novo;
			novo->ant=NULL;
		if(vetor[9].num>1)
		{
			novo->lista->ant=novo;			
		}

			cont++;
		ordenar(vetor[9].lista,vetor[9].num);
	
		}
		if(cont == 0)
		{
			novo=malloc(sizeof(Tno));
			novo->num = vArq[i];
			vetor[0].num++;
			novo->lista = vetor[0].lista;
			vetor[0].lista = novo;
			novo->ant=NULL;
		if(vetor[0].num>1)
		{
			novo->lista->ant=novo;			
		}
	    	ordenar(vetor[0].lista,vetor[0].num);

		}

	}
	
	for(i=0;i<10;i++)
	{
		Tno *aux = NULL;
		
		printf("\n%d %d END: %p\n\n", i, vetor[i].num, vetor[i].lista);
		
		aux = vetor[i].lista;
		
		while(aux != NULL)
		{
			printf("[END: %p] ---> (X= %d,ANT: %p | PROX: %p)\n", aux, aux->num, aux->ant,aux->lista);
			aux = aux->lista;
		}
		
	}
	
	
	system("pause");
	return 0;
}
void ordenar(Tno *inicio, int n)
{
	int no1, no2,i,j;
	Tno *aux;
	
	
	for(i=0;i<n;i++)
	{
		aux=malloc(sizeof(Tno));
		aux=inicio;
		
		for(j=0;j<(n-1);j++)
		{
			no1=aux->num;
			no2=aux->lista->num;
			
			if(no1<no2)
			{
				aux->num=no2;
				aux->lista->num=no1;
			}
			
			aux=aux->lista;
		}
	}
}
