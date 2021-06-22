//Andressa Pereira Silva
//AV1 de 2FPR 2019II
//11/10/2019
//1-a)

//NEW >>> PROGRAMA CONSERTADO

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct data
{
	int dia;
	int mes;
	int ano;
	
}Tdata;

typedef struct agenda
{
	char compromisso[500];
    Tdata data[20];
	
}Tagenda;

int main()
{
	Tagenda agenda[5];
	int i;
	
	for (i=0;i<2;i++) //lendo estruturas= "i" compromissos
	{
		printf("Dia:\n");
		scanf("%d",&agenda[i].data[i].dia);//consertado [i]
		
		printf("Mes:\n");
		scanf("%d",&agenda[i].data[i].mes);
		
		printf("Ano:\n");
		scanf("%d",&agenda[i].data[i].ano);
		
		fflush(stdin);
		printf("Compromisso: ");
		gets(agenda[i].compromisso);
		
	}
	
	for (i=0; i<2; i++)
	{
		printf("Dia %d / %d / %d >> Compromisso: %s", agenda[i].data[i].dia,agenda[i].data[i].mes,agenda[i].data[i].ano, agenda[i].compromisso);
	}
	
}
