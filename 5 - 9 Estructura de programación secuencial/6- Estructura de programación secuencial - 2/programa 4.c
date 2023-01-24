#include<stdio.h>
#include<conio.h>

int main ()
{
	int lado, perimetro;
	
	printf("Inserte el valor del lado del cuadrado: ");
	scanf("%i",&lado);
	
	perimetro = lado * 4;
	
	printf("El perimetro del cuadrado es: %i",perimetro);
	
	getch();
	return 0;
}
