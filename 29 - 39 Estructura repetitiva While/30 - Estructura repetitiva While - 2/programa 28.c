//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include <wchar.h>
#include <locale.h> 

/* ENUNCIADO
Escribir un programa que solicite la carga de un valor positivo y nos muestre desde 1 hasta el valor 
ingresado de uno en uno.
Ejemplo: Si ingresamos 30 se debe mostrar en pantalla los números del 1 al 30.

Es de FUNDAMENTAL importancia analizar los diagramas de flujo y la posterior codificación en C de los siguientes 
problemas, en varios problemas se presentan otras situaciones no vistas en el ejercicio anterior.
*/

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes

	int i, x;
	
	printf("Ingrese el número final: ");
	scanf("%i",&x);
	printf("\n");
	i=1;
	
	while (i <= x) {
		printf("%i",i);
		i=i+1;
		
		if (i>=1 && i<=x){
			printf("-");
		} 
	}
	
	getch();
	return 0;
}
