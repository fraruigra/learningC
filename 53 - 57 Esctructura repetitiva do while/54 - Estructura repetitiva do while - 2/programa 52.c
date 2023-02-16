/* ENUNCIADO
Escribir un programa que solicite la carga de n�meros por teclado, obtener su promedio. 
Finalizar la carga de valores cuando se ingrese el valor 0.

Cuando la finalizaci�n depende de alg�n valor ingresado por el operador conviene 
el empleo de la estructura do while, por lo menos se cargar� un valor 
(en el caso m�s extremo se carga 0, que indica la finalizaci�n de la carga de valores)
*/

//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h> 

int main ()
{
	setlocale(LC_ALL, ""); //Impresi�n de tildes

	int i, f, valor, suma=0;
	float iFlo, sumaFlo, promedio;

	do {
		printf("Ingrese el n�mero de valores que se desea a�adir: ");
		scanf("%i",&i);
		for (f=1; f<=i;f++){
			printf("A�ada el %i� valor: ",f);
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
