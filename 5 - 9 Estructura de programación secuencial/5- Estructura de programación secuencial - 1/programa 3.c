#include<stdio.h>
#include<conio.h>

int main ()
{
	int num1, num2, suma, producto;
	
	printf("Ingrese primer valor: ");
	scanf("%i",&num1);
	printf("Ingrese segundo valor: ");
	scanf("%i",&num2);
	
	suma = num1 + num2;
	producto = num1 * num2;

	printf("\nLa suma de ambos valores es %i",suma);
	printf("\nEl producto de ambos valores es %i",producto);
	
	getch();
	return 0;
}
