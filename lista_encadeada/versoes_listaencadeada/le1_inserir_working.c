/*Lista Encadeada(linked list): ? uma sequ?ncia de c?lulas; Cada c?lula cont?m um objeto (todos os objetos s?o do mesmo tipo) e o endere?o da c?lula seguinte
*/
#include<stdio.h>
#include<stdlib.h>

struct registro{
	int conteudo;
	struct registro *prox;
};
typedef struct registro celula; //Chamei a estrutura "registro" de c?lula, que vai ser tratada como um novo tipo de dado.

//o endere?o de uma lista encadeada ? o endere?o da sua primeira c?lula.
//a lista encadeada est? vazia somente se o endere?o da sua primeira c?lula for = a NULL.
//le ? o endere?o da lista encadeada nas fun??es.

void imprimir(celula *le);//recursiva
void inserirFinal (int x, celula *le);
void inserirInicio (int x, celula **le);
void inserir (int x, celula *p);
void removerProx (celula *p);
void removerIni (celula **le);
void removerFinal (celula *le);
void subsPrimeiro(int novo, int antigo, celula *le);
void subsTodos(int novo, int antigo, celula *le);
celula *busca_r (int x, celula *le); //recursiva
celula *busca(int x, celula *le);


int main()
{
	celula *inicio;
	celula *aux;
	int x, y, opcao=0, opInserir=0, opRemover=0,busca;
	
	inicio=malloc(sizeof(celula));
	inicio->prox=NULL;
	inicio->conteudo=0;
	
	aux=malloc(sizeof(celula));
	
	while(opcao!=6)
	{
	printf("\n\nMenu da Lista Encadeada:\n\n1)Inserir\n2)Remover\n3)Buscar\n4)Substituir\n5)Printar Lista\n6)Sair do programa\n\nDigite a opcao desejada: ");
	scanf("%d",&opcao);
	
	switch(opcao)
	{
		case 1:
			printf("\nEntre com o valor para inserir: ");
			scanf("%d",&x);
			printf("\nOnde deseja inserir?\n\n1)Inicio\n2)Final\n3)Escolher lugar\n\n Digite a opcao desejada: ");
			scanf("%d",&opInserir);
			
			switch(opInserir)
			{
				
				case 1:
					inserirInicio (x, &inicio);
					break;
				case 2:
					inserirFinal (x, inicio);
					break;
				case 3:
					imprimir(inicio);
					printf("\nEscolha o conteudo anterior ao lugar onde voce quer inserir");
					scanf("%d",&busca);
					
					aux=busca_r(busca,inicio);
					
					inserir(x, aux);
					break;
				default:
				printf("\nValor invalido\n\n");	
				break;
			}
		break;
		case 2:
			printf("\nOnde deseja remover?\n\n1)Inicio\n2)Final\n3)Escolher lugar\n\n Digite a opcao desejada: ");
			scanf("%d",&opRemover);
			
			switch(opRemover)
			{
				
				case 1:
					removerIni (&inicio);
					break;
				case 2:
					removerFinal (inicio);
					break;
				case 3:
					imprimir(inicio);
					printf("\nEscolha o conteudo a ser removido: ");
					scanf("%d",&busca);
					
					aux=busca_r(busca,inicio);
					
					removerProx (aux);
					break;
				default:
				printf("\nValor invalido\n\n");	
				break;
			}
			
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			imprimir(inicio);
			break;
		case 6:
			return 0;
			break;
		default:
		printf("\nValor Invalido\n\n");
		break;	
	}	
	}
	
}

void imprimir(celula *le)
{  //fun??o recursiva pra imprimir a lista.
			if(le!=NULL)
				{
					printf("\nConteudo: %d  Endereco: %p Endereco Prox: %p\n",le->conteudo,le,le->prox);
					imprimir(le->prox);
				}
}

celula *busca(int x, celula *le)
{
	celula *aux;
	aux=le; 
	
	while(aux!=NULL && aux->conteudo!=x) //ele para no valor quando alguma das duas condi??es s?o satisfeitas
	{
		aux=aux->prox;
	}
	
	return aux; //se ele retornar NULL ? por que o valor n?o foi encontrado na lista, ou a lista ta vazia, se ele retornar um endere?o, ? o endere?o onde x foi encontrado. 
}
 celula *busca_r (int x, celula *le) //vers?o recursiva da fun??o busca.
{
   if (le == NULL)
   {
   		return NULL;
   }  
   if (le->conteudo == x)
   {
   		return le;
   }  
   
   return busca_r (x, le->prox);
}

void inserirInicio (int x, celula **le)
{
   celula *nova;
   nova = malloc (sizeof (celula));
   nova->conteudo = x;
   nova->prox = (*le);
   (*le)=nova;
   
   printf("\nValor inserido com sucesso!\n"); 
}

void inserirFinal (int x, celula *le)
{
	celula *aux2;
	celula *nova;
	
	aux2=malloc (sizeof(celula));
	nova=malloc (sizeof(celula));
	nova->conteudo = x;
	nova->prox = NULL;
	
	aux2=le;
	
	while(aux2->prox!=NULL)
	{
		aux2=aux2->prox;
	}
	
	aux2->prox=nova;
	
   printf("\nValor inserido com sucesso!\n");

}

void inserir (int x, celula *p)
{
   celula *nova;
   nova = malloc (sizeof (celula));
   nova->conteudo = x;
   nova->prox = p->prox;
   p->prox = nova;
   
   printf("\nValor inserido com sucesso!\n");
	
}

void removerProx (celula *p)
{
   celula *lixo;
   lixo = p->prox;
   p->prox = lixo->prox;
   free (lixo);
}
void removerIni (celula **le) //ningu?m precisa apontar para o inicio, por isso nao precisa do remover proximo
{
   celula *lixo;
   lixo = (*le);
   (*le)= lixo->prox;
   free (lixo);
}

void removerFinal (celula *le)
{
	celula *lixo;
	celula *aux;
	
	aux=le;
	
	while(aux->prox->prox!=NULL) //vai parar quando aux->prox->prox for igual a NULL
	{
		aux=aux->prox;
	}
	
	removerProx(aux);
}

void subsPrimeiro(int novo, int antigo, celula *le)
{	
	celula *aux;
	aux = le;
	
	while(aux->conteudo != antigo && aux != NULL)
	{
		aux=aux->prox;	
	}
	
	if(aux==NULL)
	{
		printf("Numero nao encontrado!");	
	}
	else
	{
		aux->conteudo=novo;
	}	
}

void subsTodos(int novo, int antigo, celula *le)
{
	celula *aux;
	int cont=0;
	
	for(aux=le; aux!=NULL;aux=aux->prox)
	{
		if(aux->conteudo==antigo)
		{
			aux->conteudo=novo;
			cont++;
		}
	}
	
	if(cont==0)
	{
		printf("Numero nao encontrado");
	}
}

/*lista pronta 
	aux=malloc(sizeof(celula));
	aux->conteudo=10;
	aux->prox=NULL;
	
	inicio=aux;

	aux=malloc(sizeof(celula));	
	aux->conteudo=20;
	aux->prox=NULL;
	
	inicio->prox=aux;

	aux=malloc(sizeof(celula));
	aux->conteudo=30;
	aux->prox=NULL;
	
	inicio->prox->prox=aux;
*/
