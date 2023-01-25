#include<stdio.h>
#include<conio.h>

int main ()
{
	float valor;
	
	printf("Por favor ingrese un numero comprendido entre 1 y 99: ");
	scanf("%f",&valor);
	
	if (valor>=10 && valor<=99) 
	{
		printf("El valor introducido tiene dos digitos.");
	} else if (valor>=100) {
		printf("El valor introducido es superior a 99.");
	} else {
		printf("El valor introducido tiene 1 digito.");
	}
	
	getch();
	return 0;
}
