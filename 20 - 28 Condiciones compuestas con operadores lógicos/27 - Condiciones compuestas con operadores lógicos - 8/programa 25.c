#include<stdio.h>
#include<conio.h>
#include <wchar.h>
#include <locale.h> 

/* ENUNCIADO
Escribir un programa que pida ingresar la coordenada de un punto en el plano, 
es decir dos valores enteros x e y (distintos a cero).
Posteriormente imprimir en pantalla en que cuadrante se ubica dicho punto. 
(1º Cuadrante si x > 0 Y y > 0 , 2º Cuadrante: x < 0 Y y > 0, etc.)
*/

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes

	int x, y;

	printf("Introduce la coordenada X: ");
	scanf("%i",&x);
	printf("Introduce la coordenada Y: ");
	scanf("%i",&y);
	
	if (x < 0 && y > 0){
		printf("\nLas coordenadas corresponden al primer cuadrante (cuadrante superior izquierda).");
	} else if (x > 0 && y > 0){
		printf("\nLas coordenadas corresponden al segundo cuadrante (cuadrante superior derecha).");
	} else if (x < 0 && y < 0){
		printf("\nLas coordenadas corresponden al tercer cuadrante (cuadrante inferior izquierda).");
	} else if (x > 0 && y > 0) {
		printf("\nLas coordenadas corresponden al cuarto cuadrante (cuadrante superior izquierda).");
	}

	getch();
	return 0;
}
