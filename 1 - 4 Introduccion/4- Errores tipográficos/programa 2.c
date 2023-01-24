#include<stdio.h>

int main ()
{
	int lado, superficie;
	
	printf("Ingrese el valor del lado del cuadrado:\n");
	scanf("%i",&lado);
	
	//Superficie=lado*lado; Dara error ya que no existe la variable Superficie, debe ser superficie
	superficie=lado*lado;
	
	printf("La superficie del cuadrado es: %i", superficie);
	
	getchar();
	return 0;
}
