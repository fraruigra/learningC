#include<stdio.h>
#include<conio.h>
#include <wchar.h>
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes

	float num1,num2,num3;
	
	printf("Ingrese el primer valor a comparar: ");
	scanf("%f",&num1);
	printf("Ingrese el segundo valor a comparar: ");
	scanf("%f",&num2);
	printf("Ingrese el tercer valor a comparar: ");
	scanf("%f",&num3);
	
	if (num1 > num2 && num1 > num3) {
	printf("El primer valor es superior a los otros dos. Por lo tanto %.2f es superior a %.2f y a %.2f.", num1, num2, num3);
	} else {
		if (num2 > num1 && num2 > num3) {
		printf("El segundo valor es superior a los otros dos. Por lo tanto %.2f es superior a %.2f y a %.2f.", num2, num1, num3);
		} else {
		printf("El tercer valor es superior a los otros dos. Por lo tanto %.2f es superior a %.2f y a %.2f.", num3, num1, num2);
	}
	}
	
	getch();
	return 0;
}
