//Andressa Pereira Silva
//AV1 de 2FPR 2019II
//11/10/2019
//2

#include<stdio.h>

void binario(int num,int bin[30],int *i);
int main()
{
	int n;
	int bin[30]={0};
	int i=0;
	
	printf("N=");
	scanf("%d",&n);

	binario(n,bin,&i);
	
	for(i-=1;i>=0;i--)
	{
		printf("%d",bin[i]);
	}
}
void binario(int num,int bin[30],int *i)
{
	if(num>0)
	{
		bin[*i]=(num)%2;
		(*i)++;
		binario(num/2,bin,i);
	}
} 
