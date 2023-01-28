#include<stdio.h>
#include<conio.h>
#include <wchar.h>
#include <locale.h> 

/* Se ingresan por teclado tres números, si al menos uno de los valores ingresados es 
menor a 10, imprimir en pantalla la leyenda "Alguno de los números es menor a diez".
*/

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes

	int num1,num2,num3;
	
	printf("Introduce el primer valor: ");
	scanf("%i",&num1);
	printf("Introduce el segundo valor: ");
	scanf("%i",&num2);
	printf("Introduce el tercer valor: ");
	scanf("%i",&num3);
	
	if (num1 < 10 || num2 < 10 || num3 < 10) {
		printf("\nAlguno de los valores introducidos es inferior a 10");
	} else {
		printf("\nTodos los valores introducidos son superiores a 10");
	}

	getch();
	return 0;
}
