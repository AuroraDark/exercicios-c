/*Lista Duplamente Encadeada*/

#include<stdio.h>
#include<stdlib.h>

struct no{
	int conteudo;
	struct no *ant;
	struct no *prox;
};
typedef struct no Tno;

//FUNÇÕES DO PROGRAMA
void imprimir(Tno *le);//RECURSIVA
void inserirFinal (int x, Tno *le);
void inserirInicio (int x, Tno **le);//pronto
void inserir (int x, Tno *p);
void removerProx (Tno *p);
void removerIni (Tno **le);
void removerFinal (Tno *le);
void subsPrimeiro(int novo, int antigo, Tno *le);
void subsTodos(int novo, int antigo, Tno *le);
Tno *busca_r (int x, Tno *le); //recursiva
Tno *busca(int x, Tno *le);
Tno *busca_prox (int x, Tno *le); //busca pro removerProx funcionar direito (recursiva)


int main()
{
	//VARIAVEIS
	Tno *inicio;
	Tno *aux;
	int x, y, opcao=0, opInserir=0, opRemover=0, opSubsti=0, busca;
	
	//LISTA PRONTA
	aux=malloc(sizeof(Tno));
	aux->conteudo=10;
	aux->ant=NULL;
	aux->prox=NULL;
	
	inicio=malloc(sizeof(Tno)); //alocando espaço para inicio
	inicio->ant=NULL;
	inicio->prox=aux;
	
	aux=malloc(sizeof(Tno));
	aux->conteudo=20;
	aux->ant=inicio->prox;
	aux->prox=NULL;
	
	inicio->prox->prox=aux;
	
	imprimir(inicio->prox);
	
	//INICIO DO PROGRAMA
	
	printf("Bem Vindo ao programa da Lista Duplamente Encadeada!!\n\n O programa ja vem com uma lista pronta com 3 nos(nos sao os elementos da lista, eles sao interligados pelos enderecos do prox e ant, que apontam o proximo no e o no anterior, fazendo assim a lista)(10, 20).");
	printf("\n\nRepare que o endereco prox do no eh igual ao endereco do no debaixo, e o endereco ant do no eh igual ao no de cima. AS PONTAS TEM VALOR NULL(0000000) (pra voce ver isso comeca digitando 5, que eh a opcao exibir lista), isso eh o que os liga");
	printf("\n\nENFIM, DIVIRTA-SE kkkk");
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
			printf("\nOnde deseja remover?\n\n1)Inicio\n2)Final\n3)Remover Proximo\n\n Digite a opcao desejada. >>> ");
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
				printf("\n\nNumero nao encontrado, tente novamente.<<\n");
			}
			else
			{
				printf("\n -------- BUSCA BEM SUCEDIDA -------- \n");
				printf("\n>>>>>Endereco de memoria do conteudo ( %d ): %p .",aux->conteudo,aux);
			}				
			break;
		case 4:
			printf("\n------------------------\nEntre com o valor a substituir (NOVO VALOR) >>>  ");
			scanf("%d",&x);
			printf("\n------------------------\nEntre com o valor que vai ser substituido (ANTIGO VALOR) >>>  ");
			scanf("%d",&y);

			printf("\n>>-----| MENU - SUBSTITUIR |-----<<\n");
			printf("\nEscolha o procedimento de substituicao:\n\n1)Substituir todos\n2)Substituir somente o primeiro\n\n Digite a opcao desejada. >>> ");
			scanf("%d",&opSubsti);
			
			switch(opSubsti)
			{
				
				case 1:
					subsTodos(x, y, inicio);
					break;
				case 2:
					subsPrimeiro(x, y, inicio);
					break;
				default:
				printf("\n>>Valor invalido!!\n\n");	
				break;
			}

			break;
		case 5:
			imprimir(inicio->prox);
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

void imprimir(Tno *le)
{  //função recursiva pra imprimir a lista.
			if(le!=NULL)
				{
					printf("\n\n>>----------- EXIBINDO NO  ----------- <<\n| Conteudo: %d | Endereco Ant: %p | Endereco: %p | Endereco Prox: %p |\n\n",le->conteudo,le->ant,le,le->prox);
					imprimir(le->prox);
				}
}
Tno *busca(int x, Tno *le)
{
	Tno *aux;
	aux=le; 
	
	while(aux!=NULL && aux->conteudo!=x) //ele para no valor quando alguma das duas condições são satisfeitas
	{
		aux=aux->prox;
	}
	
	return aux; //se ele retornar NULL é por que o valor não foi encontrado na lista, ou a lista ta vazia, se ele retornar um endereço, é o endereço onde x foi encontrado. 
}
 Tno *busca_r (int x, Tno *le) //versão recursiva da função busca.
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
 Tno *busca_prox (int x, Tno *le) //busca pro removerprox.
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


void inserirInicio (int x, Tno **le) //pronto
{
   Tno *nova;
   nova = malloc (sizeof (Tno));
   nova->conteudo = x;
   nova->ant=NULL;
   nova->prox=(*le)->prox;
   (*le)->prox=nova;
   
   
   printf("\n -------- INSERIDO COM SUCESSO! -------- \n"); 
}

void inserirFinal (int x, Tno *le)
{
	Tno *aux2;
	Tno *nova;
	
	aux2=malloc (sizeof(Tno));
	nova=malloc (sizeof(Tno));
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

void inserir (int x, Tno *p)
{
   Tno *nova;
   nova = malloc (sizeof (Tno));
   nova->conteudo = x;
   nova->prox = p->prox;
   p->prox = nova;
   
   printf("\n -------- INSERIDO COM SUCESSO! -------- \n");	
}

void removerProx (Tno *p)
{
   Tno *lixo;
   lixo = p->prox;
   p->prox = lixo->prox;
   free (lixo);
   
   printf("\n -------- REMOVIDO COM SUCESSO! -------- \n");
}
void removerIni (Tno **le) //ninguém precisa apontar para o inicio, por isso nao precisa do remover proximo
{
   Tno *lixo;
   lixo = (*le);
   (*le)= lixo->prox;
   free (lixo);
   
   printf("\n -------- REMOVIDO COM SUCESSO! -------- \n");
}

void removerFinal (Tno *le)
{
	Tno *lixo;
	Tno *aux;
	
	aux=le;
	
	while(aux->prox->prox!=NULL) //vai parar quando aux->prox->prox for igual a NULL
	{
		aux=aux->prox;
	}
	
	removerProx(aux);
	
	printf("\n -------- REMOVIDO COM SUCESSO! -------- \n");
}


void subsPrimeiro(int novo, int antigo, Tno *le)
{	
	Tno *aux;
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

void subsTodos(int novo, int antigo, Tno *le)
{
	Tno *aux;
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


