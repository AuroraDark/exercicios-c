//Arvore Binária

#include<stdio.h>
#include<stdlib.h>

struct arvore {
	int conteudo;
	struct arvore *direita;
	struct arvore *esquerda;
	struct arvore *pai;
};

typedef struct arvore no;

//funções
void imprimir(no *raiz);
no *busca (int x, no *raiz);
void inserir (int x, int opLado, no *folha);
void menuInserir (no *raiz);
void imprimirFolhas (no *raiz);
no *buscaFolha (int x, no *raiz);
void subsTodos(int novo, int antigo, no *raiz);
void subsPrimeiroDir(int novo, int antigo, no *raiz);
void subsPrimeiroEsq(int novo, int antigo, no *raiz);


int main()
{
	no *raiz, *aux;
	int x, opcao, y, opSubsti=0, check=0;

	raiz=malloc(sizeof(no)); //alocando espaço de memoria para raiz
	
	raiz->conteudo=0;    //Criando a raiz da arvore 
	raiz->direita=NULL;
	raiz->esquerda=NULL;
	raiz->pai=NULL;

	aux=malloc(sizeof(no));		
	aux->conteudo=20;
	aux->direita=NULL;
	aux->esquerda=NULL;
	aux->pai=raiz;
	
	raiz->direita=aux;
	
	aux=malloc(sizeof(no));
	aux->conteudo=10;
	aux->direita=NULL;
	aux->esquerda=NULL;
	aux->pai=raiz;
	
	raiz->esquerda=aux;
	
	aux=malloc(sizeof(no));	
	aux->conteudo=40;
	aux->direita=NULL;
	aux->esquerda=NULL;
	aux->pai=raiz->direita;
	
	raiz->direita->direita=aux;
	
	aux=malloc(sizeof(no));
	aux->conteudo=30;
	aux->direita=NULL;
	aux->esquerda=NULL;
	aux->pai=raiz->direita;
	
	raiz->direita->esquerda=aux;

	aux=malloc(sizeof(no));
	aux->conteudo=50;
	aux->direita=NULL;
	aux->esquerda=NULL;
	aux->pai=raiz->direita->esquerda;
	
	raiz->direita->esquerda->esquerda=aux;
		

	while(opcao!=6)
	{
		printf("\n\n>>>>>------------| MENU - PRINCIPAL |--------------<<<<<<\n\n1)Inserir\n2)Remover\n3)Buscar\n4)Substituir\n5)Printar Arvore\n6)Sair do programa\n\nDigite a opcao desejada: ");
		scanf("%d",&opcao);
	
		switch(opcao)
		{
			case 1:
				menuInserir(raiz);			
				break;
			case 2:
				printf("\n>>>> (REMOVER) esta em desenvolvimento...\n");
				break;
			case 3:
				printf("\n>>-----| BUSCA |-----<<\n");
				printf("\nEntre com o numero a ser buscado. >>>");
				scanf("%d",&x);
				
				aux=malloc(sizeof(no));
				aux= busca(x, raiz);
				
				if(aux==NULL)
				{
					printf("\n\nNumero nao encontrado, tente novamente.<<\n");
				}
				else
				{
					printf("\n -------- BUSCA BEM SUCEDIDA -------- \n");
					printf("\n>>>>>Endereco de memoria do conteudo ( %d ):  %p ",aux->conteudo,aux);
				}				
				break;
			case 4:
					imprimir(raiz);
					printf("\n------------------------\nEntre com o valor a substituir (NOVO VALOR) >>>  ");
					scanf("%d",&x);
					printf("\n------------------------\nEntre com o valor que vai ser substituido (ANTIGO VALOR) >>>  ");
					scanf("%d",&y);

					aux=malloc(sizeof(no));
					aux= busca(y, raiz);
					
					if(aux==NULL)
					{
	    				printf("\n\nNumero nao encontrado, tente novamente.<<\n");
					}
	     			else
				    {			
			 			printf("\n>>-----| MENU - SUBSTITUIR |-----<<\n");
						printf("\nEscolha o procedimento de substituicao:\n\n1)Substituir todos\n2)Substituir somente o primeiro direita->esquerda\n3)Substituir somente o primeiro esquerda->direita\n\n Digite a opcao desejada. >>> ");
						scanf("%d",&opSubsti);
						
						switch(opSubsti)
						{
							
							case 1:
								subsTodos(x, y, raiz);
								printf("\n-----------SUBSTITUIDO COM SUCESSO----------\n");
								break;
							case 2:
								subsPrimeiroDir(x, y, raiz);	
								printf("\n-----------SUBSTITUIDO COM SUCESSO----------\n");
								break;
							case 3:
								subsPrimeiroEsq(x, y, raiz);	
								printf("\n-----------SUBSTITUIDO COM SUCESSO----------\n");
								break;
						
							default:
							printf("\n>>Valor invalido!!\n\n");	
							break;
						}
					}
					break;
				case 5:
					imprimir(raiz);			
				break;
			case 6:
				return 0;
				break;
			default:
			printf("\nValor Invalido\n\n");
			break;	
		}	
   }
	return 0;

	}

//FUNÇÕES

void imprimir(no *raiz)
{
	if(raiz!=NULL)
	{
		printf("\n| Conteudo: %d | Endereco: %p | Endereco Direita: %p | Endereco Esquerda: %p | Endereco PAI: %p |\n", raiz->conteudo, raiz, raiz->direita, raiz->esquerda, raiz->pai);
		imprimir(raiz->esquerda);
		imprimir(raiz->direita);
	}
}

no *busca (int x, no *raiz) //vai retornar o no
{
	if(raiz==NULL)
	{
		return NULL; //caso o numero nao tenha sido encontrado
	}

	if(raiz->conteudo==x)
	{
		return raiz;
	}
		 busca(x, raiz->esquerda);
		 busca(x, raiz->direita);
}

no *buscaFolha (int x, no *raiz) //vai retornar o no
{
	if(raiz==NULL)
	{
		return NULL; //caso o numero nao tenha sido encontrado
	}

	if(raiz!=NULL)
	{
		if(raiz->direita==NULL && raiz->esquerda==NULL)
		{
			if(raiz->conteudo==x)
			{
				return raiz;

			}
		}
    	else
		{
			if(raiz->direita==NULL)
			{
				if(raiz->conteudo==x)
				{
					return raiz;
				}

			}
			else
			{
				if(raiz->esquerda==NULL)
				{
					if(raiz->conteudo==x)
					{
						return raiz;
					}
				}
			}
		}

		 busca(x, raiz->esquerda);
		 busca(x, raiz->direita);
}
}

void inserir (int x, int opLado, no *folha)
{
	no *nova;
	
	nova=malloc(sizeof(no)); //criando a nova folha
	nova->direita=NULL;
	nova->esquerda=NULL;
	nova->conteudo=x;
	nova->pai=folha;
	
	if(opLado==1)
	{
		folha->direita=nova;
		printf("----------INSERIDO COM SUCESSO!----------");
	}
	if(opLado==2)
	{
		folha->esquerda=nova;
		printf("----------INSERIDO COM SUCESSO!----------");
	}
}

void menuInserir (no *raiz)
{
	int opLado, valor, busca;
	no *folha;
	
	
	printf("\nEntre com o valor que deseja inserir>> ");
	scanf("%d",&valor);
	
	imprimirFolhas(raiz);
	
	printf("\nEscolha o conteudo do pai da nova folha>> ");
	scanf("%d", &busca);
	
	folha=malloc(sizeof(no));
	
	folha=buscaFolha(busca, raiz);
	
	if(folha->direita==NULL && folha->esquerda==NULL)
	{
		printf("\n(DOIS LADOS DISPONÍVEIS!) Em qual lado deseja inserir?>> ");
		printf("\n\n(DIGITE 1) Direito\n(DIGITE 2) Esquerdo\n\n");
		scanf("%d", &opLado);						
	}
	else
	{
		if(folha->direita==NULL)
		{
			printf("\nLado direito automaticamente escolhido pois eh o unico livre.");
			opLado=1;
		}
		else
		{
			if(folha->esquerda==NULL)
			{
				printf("\nLado esquerdo automaticamente escolhido pois eh o unico livre.");
				opLado=2;
			}
		}
	}

	if(opLado==1 || opLado==2)
	{
		inserir(valor,opLado,folha);	
	}
	else
	{
		printf("\nO valor inserido esta INVALIDO.\n");
	}
}

void imprimirFolhas (no *raiz)
{
	if(raiz!=NULL)
	{
		if(raiz->direita==NULL && raiz->esquerda==NULL)
		{
			printf("\nFolha >>> Lados Disponiveis: (Direito) e (Esquerdo) | Conteudo: %d | Endereco: %p |\n", raiz->conteudo, raiz);
		}
    	else
		{
			if(raiz->direita==NULL)
			{
				printf("\nFolha >>> Lados Disponiveis: (Direito) | Conteudo: %d | Endereco: %p |\n", raiz->conteudo, raiz);
			}
			else
			{
				if(raiz->esquerda==NULL)
				{
					printf("\nFolha >>> Lados Disponiveis: (Esquerdo) | Conteudo: %d | Endereco: %p |\n", raiz->conteudo, raiz);
				}
			}
		}
	
		imprimirFolhas (raiz->direita);
		imprimirFolhas (raiz->esquerda);		
	}
}

void subsTodos(int novo, int antigo, no *raiz)
{
	if(raiz!=NULL)
	{
		if(raiz->conteudo==antigo)
		{
			raiz->conteudo=novo;
		}	
		subsTodos(novo,antigo,raiz->direita);
		subsTodos(novo,antigo,raiz->esquerda);				
	}
}
void subsPrimeiroDir(int novo, int antigo, no *raiz)
{
	if(raiz!=NULL)
	{
		if(raiz->conteudo==antigo)
		{
			raiz->conteudo=novo;
		}
		else
		{
			subsPrimeiroDir(novo,antigo,raiz->direita);
			subsPrimeiroDir(novo,antigo,raiz->esquerda);		
		}	
		
	}	
}
void subsPrimeiroEsq(int novo, int antigo, no *raiz)
{
	if(raiz!=NULL)
	{
		if(raiz->conteudo==antigo)
		{
			raiz->conteudo=novo;
		}
		else
		{
			subsPrimeiroEsq(novo,antigo,raiz->esquerda);		
			subsPrimeiroEsq(novo,antigo,raiz->direita);
		}			
	}
}


