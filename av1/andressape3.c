//Andressa Pereira Silva
//AV1 de 2FPR 2019II
//11/10/2019
//3

#include<stdio.h>
int main()
{
	FILE *p;
	int cont[6]={0}; //contadores
	int eleitores;
	int i,MaiorNum=(-1),MenorNum=9999;
	int MaisVot,MenosVot;
	int votos[100]={0};
	
	p=fopen("votos.txt","r"); //abrindo arquivo
	
	fscanf(p,"%d",&eleitores); //lendo numero de eleitores (n)
	
	
	
	for(i=0;i<eleitores;i++) //lendo e contando votos
	{
		fscanf(p,"\n%d",&votos[i]);
		
		if(votos[i]==11)
		{
			cont[1]++;
		}
		else
		{
			if(votos[i]==12)
			{
				cont[2]++;
			}
			else
			{
				if(votos[i]==13)
				{
					cont[3]++;
				}
				else
				{
					if(votos[i]==14)
					{
						cont[4]++;
					}
					else
					{
						if(votos[i]==15)
						{
							cont[5]++;
						}
						else
						{
							cont[0]++;
						}
					}
				}
			}
		}
	}
	
	for(i=0;i<6;i++) //COMPARANDO VOTOS
	{
		if(cont[i]>MaiorNum)
		{
			MaiorNum=cont[i];
			MaisVot=i;
		}
		else
		{
			if(cont[i]<MenorNum)
			{
				MenorNum=cont[i];
				MenosVot=i;
			}
		}
	}
	
	printf("\n\n");
	
	//Printando os mais votados
	if(MaisVot==0)
	{
		printf("Mais Votado: NULO, com %d votos", MaiorNum);
	}
	else
	{
		if(MaisVot==1)
		{
			printf("Mais Votado: 11, com %d votos", MaiorNum);
		}
		else
		{
			if(MaisVot==2)
			{
				printf("Mais Votado: 12, com %d votos", MaiorNum);
			}
			else
			{
				if(MaisVot==3)
				{
					printf("Mais Votado: 13, com %d votos", MaiorNum);
				}
				else
				{
					if(MaisVot==4)
					{
						printf("Mais Votado: 14, com %d votos", MaiorNum);
					}
					else
					{
						printf("Mais Votado: 15, com %d votos", MaiorNum);
					}
				}
			}
	
		}
	
	}
	
	printf("\n\n");
	
	
	//Printando os menos votados
	if(MenosVot==0)
	{
		printf("Menos Votado: NULO, com %d votos", MenorNum);
	}
	else
	{
		if(MenosVot==1)
		{
			printf("Menos Votado: 11, com %d votos", MenorNum);
		}
		else
		{
			if(MenosVot==2)
			{
				printf("Menos Votado: 12, com %d votos", MenorNum);
			}
			else
			{
				if(MenosVot==3)
				{
					printf("Menos Votado: 13, com %d votos", MenorNum);
				}
				else
				{
					if(MenosVot==4)
					{
						printf("Menos Votado: 14, com %d votos", MenorNum);
					}
					else
					{
						printf("Menos Votado: 15, com %d votos", MenorNum);
					}
				}
			}
	
		}
	
	}
		
}
