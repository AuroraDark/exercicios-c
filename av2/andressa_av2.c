//prova av2

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct noVetor noVet;

typedef struct no{
	int conteudo;
	struct no *prox;
}Tno;

void imprimir(Tno vetor_principal[10]);

int main()
{
	Tno vetor_principal[10];
	Tno *inicio,*aux;
	FILE *p;
	int i,n,x,j,k, primos=0;
	char arquivo[20];
	
	
	//iniciando vetor
	
	for(i=0;i<10;i++)
	{
		vetor_principal[i].conteudo=0;
		vetor_principal[i].prox=NULL;
	}
	
	imprimir(vetor_principal);
	
	fflush(stdin);
	printf("\nEntre com o nome do arquivo: ");
	gets(arquivo);

	p=fopen(arquivo,"r"); //lendo arquivo
	
	fscanf(p,"%d\n",&n);
	printf("%d\n",n);
	
	for(i=0;i<n;i++)
	{
		fscanf(p,"%d ", &x);
		//printf("%d ",x);
		
		inicio=malloc(sizeof(Tno));
		inicio->conteudo=x;
		inicio->prox=NULL;
		
		printf("Rodou o for do N >> n foi para %d", i);
		
		for(j=1;j<10;j++)
		{
			if(x%j==0)
			{	
				if(vetor_principal[j].prox==NULL)
				{
					vetor_principal[j].prox=inicio;
					vetor_principal[j].conteudo++;
					
				}
				if(vetor_principal[j].prox!=NULL)
				{
					aux=malloc(sizeof(Tno));
					aux=vetor_principal[j].prox;
					
					while(aux->prox!=NULL) //inserir no final da lista
					{
						aux=aux->prox;	
					}
					
					aux->prox=inicio;
					
					vetor_principal[j].conteudo++;
				}
			}
			 if(x%j!=0)
			{
				primos++;				
			}

		}
		
		if(primos==9)
		{
				if(vetor_principal[0].prox==NULL)
				{
					vetor_principal[0].prox=inicio;
					vetor_principal[0].conteudo++;					

				}
				if(vetor_principal[0].prox!=NULL)
				{
					aux=malloc(sizeof(Tno));
					aux=vetor_principal[0].prox;
					
					while(aux->prox!=NULL) //inserir no final da lista
					{
						aux=aux->prox;	
					}
					
					aux->prox=inicio;
					vetor_principal[0].conteudo++;
					
				}
			
		}
					
	}
	
	imprimir(vetor_principal);
		
}



void imprimir(Tno vetor_principal[10])
{
	int i; 
	
	for(i=0;i<10;i++) //exibindo vetor principal
	{
		Tno *aux;
		
		printf("\n\n>>>|Posicao Vetor: %d |Quantidade: %d | Prox: %p",i,vetor_principal[i].conteudo, vetor_principal[i].prox);
		
		aux=malloc(sizeof(Tno));
		aux=vetor_principal[i].prox;	

		while(aux!=NULL)
		{
			printf("\n| Conteudo: %d  | Endereco: %p | Endereco Prox: %p |\n", aux->conteudo, aux, aux->prox);
			aux=aux->prox;
		}
	}

}
