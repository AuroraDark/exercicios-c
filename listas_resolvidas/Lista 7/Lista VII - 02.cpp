/*Lista 7 - Questão 2: 
Implementar uma função que converta determinada temperatura em graus Celsius para graus Fahrenheit */

#include <stdio.h>
float conv_de_temp (float temp_C)
{
	float temp_F;
	
	temp_F = (1.8 * temp_C) + 32;
	
	return temp_F;
}
int main ()
{
	//var
	float temperatura_C, temperatura_F;
	
	//program
	printf ("Digite a temperatura em graus Celsius:");
	scanf ("%f", &temperatura_C);
	
	temperatura_F = conv_de_temp (temperatura_C);
	
	printf ("A temperatura %.2f graus C e igual a %.2f graus F.", temperatura_C, temperatura_F);
}




