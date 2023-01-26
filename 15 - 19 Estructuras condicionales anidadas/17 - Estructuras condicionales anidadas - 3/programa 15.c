#include<stdio.h>
#include<conio.h>
#include <wchar.h>
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes
	
	int valor;
	
	printf("Ingrese el valor: ");
	scanf("%i",&valor);

	if (valor >= 1) {
		printf ("El valor que ha introducido (%i) es positivo.",valor);
	} else if (valor <= -1) {
		printf ("El valor que ha introducido (%i) es negativo.", valor);
	} else {
		printf ("El valor que ha introducido (%i) es nulo.", valor);
	}
		
	getch();
	return 0;
}
