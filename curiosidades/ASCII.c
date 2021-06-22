#include <stdio.h>

int main ()
{
	int i;
	
	printf ("Tabela ASCII:\n\n");
	
	for (i=0; i<256; i++)
	{
		printf ("%d - %c\t", i, i);
		
		//pulando linha de 8 em 8
		if (i%8 == 0)
		{
			printf ("\n");
		}		
	}	
}
