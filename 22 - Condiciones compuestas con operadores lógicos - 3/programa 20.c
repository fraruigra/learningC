#include<stdio.h>
#include<conio.h>
#include <wchar.h>
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, ""); //Impresi�n de tildes

	int dd, mm, aaaa;
	
	printf("Introduce el d�a: ");
	scanf("%i",&dd);
	printf("Introduce el mes: ");
	scanf("%i",&mm);
	printf("Introduce el a�o: ");
	scanf("%i",&aaaa);
	
	if (dd == 25 && mm == 12) {
		printf("\n�Es Navidad! :)");
	} else {
		printf("\nNo es Navidad :(");
	}
		
	getch();
	return 0;
}
