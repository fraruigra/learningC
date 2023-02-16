/* ENUNCIADO
Escribir un programa que solicite la carga de números por teclado, obtener su promedio. 
Finalizar la carga de valores cuando se ingrese el valor 0.

Cuando la finalización depende de algún valor ingresado por el operador conviene 
el empleo de la estructura do while, por lo menos se cargará un valor 
(en el caso más extremo se carga 0, que indica la finalización de la carga de valores)
*/

//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h> 

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes

	int i, f, valor, suma=0;
	float iFlo, sumaFlo, promedio;

	do {
		printf("Ingrese el número de valores que se desea añadir: ");
		scanf("%i",&i);
		for (f=1; f<=i;f++){
			printf("Añada el %iº valor: ",f);
			scanf("%i",&valor);
			suma=suma+valor;
		}
		sumaFlo = suma;
		iFlo = i;
		promedio = sumaFlo/iFlo;
		printf("\nSe han introducido un total de %i valores",i);
		printf("\nSu promedio es de: %.2f", promedio);
		
		printf("\n\nSi desea salir por favor introduzca 0.\n\n\n");
	} while (i != 0);
	
	printf("\n\nHa introducido 0, pulse una tecla para salir del programa.");
	
	getch();
	return 0;
}
