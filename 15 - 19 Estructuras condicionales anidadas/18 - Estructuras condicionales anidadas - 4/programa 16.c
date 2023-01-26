#include<stdio.h>
#include<conio.h>
#include <wchar.h>
#include <locale.h> 

int main ()
{
	int valor;
	
	printf("Ingrese el valor: ");
	scanf("%i",&valor);

	if (valor >= 100) {
		printf ("El valor que ha introducido (%i) es de tres cifras.",valor);
	} else if (valor >= 10) {
		printf ("El valor que ha introducido (%i) es dos cifras.", valor);
	} else if (valor >= 1) {
		printf ("El valor que ha introducido (%i) es una cifra.", valor);
	} else {
		printf ("ERROR. El valor que ha introducido (%i) es nulo o negativo", valor);
	}
		
	getch();
	return 0;
}
