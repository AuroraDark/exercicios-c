#include <stdio.h>

int main ()
{
	int i = 171;
	float f = 3567.654;
	
	printf ("Principais caracteres de formatação em C:\n\n");
	printf ("%%c\t\tCaracter\n");
	printf ("%%d ou %%i\tInteiro\n");
	printf ("%%e ou %%E\tNotação científica\n");
	printf ("%%f\t\tFloat\n");
	printf ("%%o\t\tOctal\n");
	printf ("%%s\t\tCadeia de caracteres (string)\n");
	printf ("%%u\t\tInteiro sem sinal\n");
	printf ("%%x ou %%X\tHexadecimal\n");
	printf ("%%%%\t\tSímbolo de porcentagem (%%)\n");
	
	printf ("\n\nAlguns exemplos:\n\n");
	printf ("i = %d [%%d]\n", i);
	printf ("i = %i [%%i]\n", i);
	printf ("i = %c [%%c]\n", i);
	printf ("i = %o [%%o]\n", i);
	printf ("i = %u [%%u]\n", i);
	printf ("i = %x [%%x]\n", i);
	printf ("i = %X [%%X]\n", i);
	
	printf ("\nf = %f [%%f]\n", f);
	printf ("f = %.1f [%%.1f]\n", f);
	printf ("f = %e [%%e]\n", f);
	printf ("f = %E [%%E]\n", f);	
}
