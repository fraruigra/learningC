//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include <wchar.h>
#include <locale.h> 

/* ENUNCIADO
Desarrollar un programa que permita la carga de 10 valores por teclado y nos muestre posteriormente 
la suma de los valores ingresados y su promedio.
*/

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes

	int n,i=1,suma=0;
	float suma_flo,promedio;
	
	while (i <= 10) {
		printf("Introduzca el %iº valor: ",i);
		scanf("%i",&n);
		suma=suma+n;
		i=i+1;
	}
	
	suma_flo=suma;
	promedio=suma_flo/10;
	
	printf("\nLa suma de los valores introducidos es %i",suma);
	printf("\nEl promedio de los valores introducidos es: %.2f",promedio);
	
	getch();
	return 0;
}
