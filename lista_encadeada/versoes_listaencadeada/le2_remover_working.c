/*Lista Encadeada(linked list): É uma sequência de células; Cada célula contém um objeto (todos os objetos são do mesmo tipo) e o endereço da célula seguinte
*/
#include<stdio.h>
#include<stdlib.h>

struct registro{
	int conteudo;
	struct registro *prox;
};
typedef struct registro celula; //Chamei a estrutura "registro" de célula, que vai ser tratada como um novo tipo de dado.

//o endereço de uma lista encadeada é o endereço da sua primeira célula.
//a lista encadeada está vazia somente se o endereço da sua primeira célula for = a NULL.
//le é o endereço da lista encadeada nas funções.

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
celula *busca_prox (int x, celula *le); //busca pro removerProx funcionar direito (recursiva)

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
	printf("\n\n>>>>>------------| MENU - PRINCIPAL |--------------<<<<<<\n\n1)Inserir\n2)Remover\n3)Buscar\n4)Substituir\n5)Printar Lista\n6)Sair do programa\n\nDigite a opcao desejada: ");
	scanf("%d",&opcao);
	
	switch(opcao)
	{
		case 1:
			printf("\n------------------------\nEntre com o valor para inserir >>>  ");
			scanf("%d",&x);
			printf("\n>>-----| MENU - INSERIR |-----<<\n");
			printf("\nOnde deseja inserir?\n\n1)Inicio\n2)Final\n3)Escolher lugar\n\n Digite a opcao desejada >>>  ");
			scanf("%d",&opInserir);
			
			switch(opInserir)
			{
				
				case 1:
					inserirInicio (x, &inicio); //notas v1: voltou a funcionar por causa do ponteiro do ponteiro;
					break;
				case 2:
					inserirFinal (x, inicio);
					break;
				case 3:
					imprimir(inicio);
					printf("\nEscolha o conteudo anterior ao lugar onde voce quer inserir.>>>  ");
					scanf("%d",&busca);
					
					aux=busca_r(busca,inicio);

					if(aux==NULL)
					{
						printf("\n\n>>Numero nao encontrado, tente novamente.<<\n");
					}
					else
					{
						inserir(x, aux);
					}	
					break;
				default:
				printf("\n>>Valor invalido!!\n\n");	
				break;
			}
		break;
		case 2:
			printf("\n>>-----| MENU - REMOVER |-----<<\n");
			printf("\nOnde deseja remover?\n\n1)Inicio\n2)Final\n3)Remover Proximo\n\n Digite a opcao desejada: ");
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
					printf("\n>>Escolha o conteudo anterior ao que vai ser removido (A lista deve ter pelo menos um no alem do no cabeca): ");
					scanf("%d",&busca);
					
					aux=busca_r(busca,inicio); //test: nova busca funfou sim() nao(x)
					if(aux==NULL)
					{
						printf("\n\n>>Numero nao encontrado, tente novamente.<<\n");
					}
					else
					{
						removerProx(aux);
					}	
					break;
				default:
				printf("\n>>Valor invalido!!\n\n");	
				break;
			}
			
			break;
		case 3:
			printf("\n>>-----| BUSCA |-----<<\n");
			printf("\nEntre com o numero a ser buscado. >>>");
			scanf("%d",&busca);
			
			aux= busca_r(busca, inicio);
			
			if(aux==NULL)
			{
				printf("\n\n>>Numero nao encontrado, tente novamente.<<\n");
			}
			else
			{
				printf("\n -------- BUSCA BEM SUCEDIDA -------- \n");
				printf("\n>>>>>Endereco de memoria do conteudo ( %d ): %p .",aux->conteudo,aux);
			}				
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
{  //função recursiva pra imprimir a lista.
			if(le!=NULL)
				{
					printf("\n\n>>----------- EXIBINDO CELULA ----------- <<\n| Conteudo: %d | Endereco: %p | Endereco Prox: %p |\n\n",le->conteudo,le,le->prox);
					imprimir(le->prox);
				}
}

celula *busca(int x, celula *le)
{
	celula *aux;
	aux=le; 
	
	while(aux!=NULL && aux->conteudo!=x) //ele para no valor quando alguma das duas condições são satisfeitas
	{
		aux=aux->prox;
	}
	
	return aux; //se ele retornar NULL é por que o valor não foi encontrado na lista, ou a lista ta vazia, se ele retornar um endereço, é o endereço onde x foi encontrado. 
}
 celula *busca_r (int x, celula *le) //versão recursiva da função busca.
{
   if (le == NULL)
   {
   		return NULL; //FAZER UM IF PRA VERIFICAR SE O NUMERO FOI ENCONTRADO
   }  
   if (le->conteudo == x)
   {
   		return le; //CASO O NUMERO TENHA SIDO ENCONTRADO PRINTAR O ENDEREÇO DE MEMORIA DELE!
   }  
   
   return busca_r (x, le->prox);
}
 celula *busca_prox (int x, celula *le) //busca pro removerprox.
{
   if (le == NULL)
   {
   		return NULL; 
   }  
   if (le->prox->conteudo == x)
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
   
   printf("\n -------- INSERIDO COM SUCESSO! -------- \n"); 
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
	
   printf("\n -------- INSERIDO COM SUCESSO! -------- \n");

}

void inserir (int x, celula *p)
{
   celula *nova;
   nova = malloc (sizeof (celula));
   nova->conteudo = x;
   nova->prox = p->prox;
   p->prox = nova;
   
   printf("\n -------- INSERIDO COM SUCESSO! -------- \n");	
}

void removerProx (celula *p)
{
   celula *lixo;
   lixo = p->prox;
   p->prox = lixo->prox;
   free (lixo);
   
   printf("\n -------- REMOVIDO COM SUCESSO! -------- \n");
}
void removerIni (celula **le) //ninguém precisa apontar para o inicio, por isso nao precisa do remover proximo
{
   celula *lixo;
   lixo = (*le);
   (*le)= lixo->prox;
   free (lixo);
   
   printf("\n -------- REMOVIDO COM SUCESSO! -------- \n");
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
	
	printf("\n -------- REMOVIDO COM SUCESSO! -------- \n");
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
		printf("\n\n>>Numero nao encontrado, tente novamente.<<\n");	
	}
	else
	{
		aux->conteudo=novo;
		printf("\n -------- SUBSTITUIDO COM SUCESSO! -------- \n");
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
		printf("\n\n>>Numero nao encontrado, tente novamente.<<\n");
	}
	else
	{
		printf("\n -------- SUBSTITUIDO COM SUCESSO! -------- \n");
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
