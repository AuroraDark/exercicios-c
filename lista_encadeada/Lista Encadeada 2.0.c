
#include<stdio.h>
#include<stdlib.h>

typedef struct no{
int conteudo;
struct no *prox;
}Tno;

void inserirInicio(Tno *inicio, int valor);
void inserirFinal(Tno *inicio, int valor);
void printar(Tno *inicio);
Tno *buscar(Tno *inicio, int valor);
void removerIni(Tno *inicio);
void removerFinal(Tno *inicio);

int main(){

Tno *cabeca;
Tno *aux;
int opcao,opcaoIns,opcaoRem,valor;

cabeca=malloc(sizeof(Tno));
cabeca->conteudo=0;
cabeca->prox=NULL;

/*aux=malloc(sizeof(Tno));
aux->conteudo=10;
aux->prox=NULL;

cabeca->prox=aux;
cabeca->conteudo++;

aux=malloc(sizeof(Tno));
aux->conteudo=20;
aux->prox=NULL;

cabeca->prox->prox=aux;
cabeca->conteudo++;
*/
//menu

while(opcao<=4){

    printf("MENU LISTA ENCADEADA 2.0\n\n");
    printf("[1] INSERIR\n");
    printf("[2] REMOVER\n");
    printf("[3] BUSCAR\n");
    printf("[4] PRINTAR\n");
    printf("[5] SAIR\n");
    printf("\nDigite a opcao: ");
    scanf("%d",&opcao);
    system("cls");

    if(opcao==1)
    {
        printf("ONDE DESEJA INSERIR?\n\n[1]NO INICIO\n[2]NO FINAL\n");
        printf("\nDigite a opcao: ");
        scanf("%d", &opcaoIns);
        system("cls");
        printf("Valor: ");
        scanf("%d",&valor);
        system("cls");

        if(opcaoIns==1)
        {
            inserirInicio(cabeca,valor);
        }
        else{
            if(opcaoIns==2)
            {
                inserirFinal(cabeca,valor);
            }else
            {
                printf("Opção invalida!");
            }
        }
    }
    if(opcao==2)
    {
        printf("ONDE DESEJA REMOVER?\n\n[1]NO INICIO\n[2]NO FINAL\n");
        printf("\nDigite a opcao: ");
        scanf("%d", &opcaoRem);
        system("cls");

        if(opcaoRem==1)
        {
            removerIni(cabeca);
        }
        else{
            if(opcaoRem==2)
            {
                removerFinal(cabeca);
            }else
            {
               printf("Opção invalida!");
            }
        }

    }
    if(opcao==3)
    {
       if(cabeca->conteudo==0){
       	printf("\nA lista esta vazia");
	   }       
	   else{
       printf("Valor para buscar: ");
       scanf("%d",&valor);
       aux=malloc(sizeof(Tno));
	   
       aux=buscar(cabeca->prox,valor);
       if(aux!=NULL)
       {
           printf("Valor (%d) foi encontrado: Conteudo:%d | Endereço: %p | Endereço prox: %p", aux->conteudo, aux, aux->prox);
       }
	   }
    }
    if(opcao==4)
    {
        printf("Numero de elementos na lista: %d\n\n",cabeca->conteudo);
        printar(cabeca->prox);
    }
    if(opcao!=5)
    {
        printf("\n\nDeseja continuar? [1]Sim  ou  [2] Nao ?: ");
        scanf("%d",&opcao);
        if(opcao==2)
        {
            opcao=5;
        }

    }
    system("cls");

}

system("cls");
printf("Feito por Andressa Silva\n\nOBRIGADA POR TESTAR O PROGRAMA!\n\n:)\n\n");

}
void inserirInicio(Tno *inicio, int valor)
{
   Tno *nova;
   nova=malloc(sizeof(Tno));
   nova->conteudo=valor;

   if(inicio->conteudo==0)
   {
        nova->prox=NULL;
        inicio->prox=nova;
        inicio->conteudo++;
        printf("Inserido com Sucesso!");
   }
   else
   {
       nova->prox=inicio->prox;
       inicio->prox=nova;
       inicio->conteudo++;
       printf("Inserido com Sucesso!");
   }
}

void inserirFinal(Tno *inicio, int valor)
{
    Tno *aux;
    Tno *nova;
    nova=malloc(sizeof(Tno));

    nova->conteudo=valor;
    nova->prox=NULL;

    aux=malloc(sizeof(Tno));
    aux=inicio;

    while(aux->prox!=NULL)
    {
        aux=aux->prox;
    }

    aux->prox=nova;
    inicio->conteudo++;
    printf("Inserido com Sucesso!");
}
void printar(Tno *inicio)
{
    if(inicio!=NULL)
    {
        printf("Conteudo= %d\nEndereço= %p\nEndereço Prox= %p\n\n\n", inicio->conteudo, inicio, inicio->prox);
        printar(inicio->prox);
    }
}
void removerIni(Tno *inicio)
{
    if(inicio->conteudo==0)
    {
        printf("A lista está vazia!");
    }
    if(inicio->conteudo==1)
    {
        Tno *lixo;
        lixo=malloc(sizeof(Tno));
        lixo=inicio->prox;
        inicio->prox=NULL;

        free(lixo);
        inicio->conteudo--;
        printf("Removido com Sucesso!");
    }
    if(inicio->conteudo>=2)
    {
        Tno *lixo;
        lixo=malloc(sizeof(Tno));
        lixo=inicio->prox;
        inicio->prox=inicio->prox->prox;

        free(lixo);
        inicio->conteudo--;
        printf("Removido com Sucesso!");
    }
}

void removerFinal(Tno *inicio)
{
    if(inicio->conteudo==0)
    {
        printf("A lista está vazia!");
    }
    if(inicio->conteudo==1)
    {
        Tno *lixo;
        lixo=malloc(sizeof(Tno));
        lixo=inicio->prox;
        inicio->prox=NULL;

        free(lixo);
        inicio->conteudo--;
        printf("Removido com Sucesso!");
    }
    if(inicio->conteudo>=2)
    {
        Tno *aux;
        Tno *lixo;
        aux=malloc(sizeof(Tno));
        lixo=malloc(sizeof(Tno));

        aux=inicio;
        while(aux->prox->prox!=NULL)
        {
            aux=aux->prox;
        }
        lixo=aux->prox->prox;
        aux->prox=NULL;

        free(lixo);
        inicio->conteudo--;
        printf("Removido com Sucesso!");
    }
}
Tno *buscar(Tno *inicio, int valor)
{
    if(inicio!=NULL)
    {
        if(inicio->conteudo==valor)
        {
            return inicio;
        }
        else
        {
            buscar(inicio->prox,valor);
        }
    }
    else{
        printf("\nValor nao encontrado!");
    }
}


