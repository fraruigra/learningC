 #include<stdio.h>
#include<conio.h>
#include <wchar.h>
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes

	int num1,num2,num3;
	
	printf("Ingrese el primer valor: ");
	scanf("%i",&num1);
	printf("Ingrese el segundo valor: ");
	scanf("%i",&num2);
	printf("Ingrese el tercer valor: ");
	scanf("%i",&num3);
	
	if (num1 > num2 && num1 > num3) {
		printf("\nEl primer valor es el mayor");
	} else if (num2 > num1 && num2 > num3) {
		printf("\nEl segundo valor es el mayor");
	} else {
		printf("\nEl tercer valor es el mayor");
	}
	
		
	getch();
	return 0;
}
