#include<stdio.h>
#include<conio.h>
#include <wchar.h>
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes

	int dd, mm, aaaa;
	
	printf("Introduce el día: ");
	scanf("%i",&dd);
	printf("Introduce el mes: ");
	scanf("%i",&mm);
	printf("Introduce el año: ");
	scanf("%i",&aaaa);
	
	if (dd == 25 && mm == 12) {
		printf("\n¡Es Navidad! :)");
	} else {
		printf("\nNo es Navidad :(");
	}
		
	getch();
	return 0;
}
