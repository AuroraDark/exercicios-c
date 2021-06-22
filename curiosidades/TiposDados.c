#include <stdio.h>

int main ()
{
	printf ("Tipos de dados em C:\n\n");
	
	printf ("char: %d bytes\n", sizeof (char));
	printf ("unsigned char: %d bytes\n", sizeof (unsigned char));
	printf ("int: %d bytes\n", sizeof (int));
	printf ("unsigned int: %d bytes\n", sizeof (unsigned int));
	printf ("short: %d bytes\n", sizeof (short));
	printf ("unsigned short: %d bytes\n", sizeof (unsigned short));
	printf ("long: %d bytes\n", sizeof (long));
	printf ("unsigned long: %d bytes\n", sizeof (unsigned long));	
	
	printf ("float: %d bytes\n", sizeof (float));
	printf ("double: %d bytes\n", sizeof (double));
	printf ("long double: %d bytes\n", sizeof (long double));
}
