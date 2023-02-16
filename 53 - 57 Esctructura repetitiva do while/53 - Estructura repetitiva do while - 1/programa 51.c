/* ENUNCIADO
Escribir un programa que solicite la carga de un número entre 0 y 999, y nos muestre un 
mensaje de cuántos dígitos tiene el mismo. Finalizar el programa cuando se cargue el valor 0.
*/

//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h>

#define mil 1000
#define cien 100
#define diez 10
#define cero 0

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes
	
	int valor;
	
	do {
		printf("Ingrese un valor entre 1 y 999: ");
		scanf("%i",&valor);
		if (valor >= mil) {
			printf("\nEl valor introducido es más de mil, por favor introduzca un valor entre 1 y 999.\n");
		} else if (valor >= cien && valor < mil) {
			printf("\nEl valor introducido tiene tres dígitos.\n\n");
		} else if (valor >= diez && valor <= cien) {
			printf("\nEl valor introducido tiene dos dígitos.\n\n");
		} else if (valor > cero && valor <= diez) {
			printf("\nEl valor introducido tiene un dígito.\n\n");
		} else {
			printf("\nEl valor introducido es negativo, por favor introduzca un valor entre 1 y 999.\n");
		}
		printf("\n\nSi desea salir por favor introduzca 0.\n\n\n");
	} while (valor!=cero);
	
	printf("\n\nHa introducido 0, pulse una tecla para salir del programa.");
	
	getch();
	return 0;
}
