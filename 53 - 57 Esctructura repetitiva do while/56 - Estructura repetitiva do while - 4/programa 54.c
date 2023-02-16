/* ENUNCIADO
Realizar un programa que acumule (sume) valores ingresados por teclado hasta ingresar el 
9999 (no sumar dicho valor, indica que ha finalizado la carga). 
Imprimir el valor acumulado e informar si dicho valor es cero, mayor a cero o menor a cero.
*/

//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h> 

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes

	int valor, suma=0;
	
	printf("Si desea salir por favor introduzca el valor 9999.\n\n\n");
	
	do {
		printf("Introduzca el valor deseado: ");
		scanf("%i",&valor);
		if (valor >= 9999) {
			printf ("\n\nHa finalizado la carga");
		} else {
			suma = suma + valor;
		}
	} while (valor!=9999);
	
	printf ("\n\nEl valor acumulado es %i",suma);
	if (suma > 0) {
		printf("\n\nEl valor acumulado es superior a 0");
	} else {
		printf("\n\nEl valor acumulado es inferior a 0");
	}
	
	getch();
	return 0;
}
