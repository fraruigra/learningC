/* ENUNCIADO
Confeccionar un programa que permita la carga de valores enteros por teclado. 
Luego de ingresar el valor mostrar un mensaje por pantalla que pida confirmar al usuario 
si desea cargar otro valor ingresando los caracteres 's' o 'n'. Mostrar al final la suma de los valores ingresados.
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
	char continua;
	
	do {
		printf("Introduzca un valor entero: ");
		scanf("%i",&valor);
		suma=suma+valor;
		printf("\n¿Desea continuar? (Por favor, introduzca s/n): ");
		scanf(" %c",&continua);
		printf("\n");
	} while (continua =='s');
	
	printf("\nLa suma total de los valores introducidos es de : %i", suma);
	
	getch();
	return 0;
}
