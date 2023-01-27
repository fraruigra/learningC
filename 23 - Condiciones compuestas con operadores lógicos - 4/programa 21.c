#include<stdio.h>
#include<conio.h>
#include <wchar.h>
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes

	int num1,num2,num3,suma,producto;
	
	printf("Ingrese el primer valor: ");
	scanf("%i",&num1);
	printf("Ingrese el segundo valor: ");
	scanf("%i",&num2);
	printf("Ingrese el tercer valor: ");
	scanf("%i",&num3);
	
	if (num1 == num2 && num1 == num3) {
		printf("\nLos tres números son iguales");
		suma=num1+num2;
		printf("\nLa suma del primer valor más el segundo valor da un resultado de: %i",suma);
		producto=suma*num3;
		printf("\nMultiplicar el resultado de la suma por el tercer valor da un resultado de: %i", producto);
	} else {
		printf("\nLos tres valores introducidos no son iguales");
	}
	
	getch();
	return 0;
}
