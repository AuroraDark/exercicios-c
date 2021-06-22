/*Lista 7 - Questão 3: 
Desenvolver uma função que calcule o n-esimo termo da sequencia fibonacci. */

#include <stdio.h>

void fibonacci (int n)
{
   //var
   int i, ni, ns, novo_ns;
   //program
   ni= 0;
   ns=1;
   
   if (n<2)
   {
   	if(n==1)
   	{
   	   printf ("O primeiro termo do Fibonacci e: 0");	
    }
    else
    {
    	printf ("O segundo termo do Fibonacci e: 1");
	}
   }
   else
   {
	   for (i=3 ; i<=n ; i++)
	   {
	   	  novo_ns = ni + ns;
	   	  ni = ns;
	   	  printf ("O %d termo do Fibonacci e: %d", i, novo_ns);
	   	  ns= novo_ns;
	   	  
	   }
   }
    //printf ("O %d termo do Fibonacci e: %d", i-1, novo_ns);
}

int main ()
{
	//var
	
	int termo;
	
	//program
	
	printf ("Entre com o termo da sequencia Fibonacci desejado: \n");
	scanf ("%d", &termo);
	fibonacci (termo);
}


