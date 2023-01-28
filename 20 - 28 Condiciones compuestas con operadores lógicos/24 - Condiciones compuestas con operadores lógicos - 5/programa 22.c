#include<stdio.h>
#include<conio.h>
#include <wchar.h>
#include <locale.h> 

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
	
	if (num1 < 10 && num2 < 10 && num3 < 10) {
		printf("\nTodos los números son menores a 10.");
	} else {
		printf("\nAlguno de los números es superior a 10.");
	}
	
	getch();
	return 0;
}
