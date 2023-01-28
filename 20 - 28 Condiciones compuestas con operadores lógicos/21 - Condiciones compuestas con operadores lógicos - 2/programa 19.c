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
	
	if (mm == 1 || mm == 2 || mm == 3) {
		printf("\nEl mes es del primer trimestre");
	} else if (mm == 4 || mm == 5 || mm == 6) {
		printf("\nEl mes es del segundo trimestre");
	} else if (mm == 7 || mm == 8 || mm == 9) {
		printf("\nEl mes es del tercer trimestre");
	} else {
		printf("\nEl mes es del cuatro trimestre");
	}
		
	getch();
	return 0;
}
