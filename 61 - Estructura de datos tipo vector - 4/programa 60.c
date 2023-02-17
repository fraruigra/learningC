/* ENUNCIADO
Desarrollar un programa que permita ingresar un vector de 8 elementos, e informe:
El valor acumulado de todos los elementos del vector.
El valor acumulado de los elementos del vector que sean mayores a 36.
Cantidad de valores mayores a 50.
*/

//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h> 

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes

	int f, vector[8], valorTot=0, valorTot36=0, valorSup50=0;
	
	for (f=1;f<=8;f++){
		printf("Ingrese el %iº valor: ",f);
		scanf("%i",&vector[f]);
		valorTot=valorTot+vector[f];
		if (vector[f]>36){
			valorTot36=valorTot36+vector[f];
			if (vector[f]>50){
				valorSup50++;
			}
		}
	}
	
	printf("\n\nEl total de los valores acumulados es: %i.",valorTot);
	printf("\nEl valor acumulado de aquellos valores superiores a 36 es: %i.",valorTot36);
	printf("\nHay un total de %i valores superiores a 50.",valorSup50);
	
	getch();
	return 0;
}
