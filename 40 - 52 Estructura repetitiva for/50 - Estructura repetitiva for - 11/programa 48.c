/* ENUNCIADO
Escribir un programa que pida ingresar coordenadas (x,y) que representan puntos en el plano.
Informar cuántos puntos se han ingresado en el primer, segundo, tercer y cuarto cuadrante. 
Al comenzar el programa se pide que se ingrese la cantidad de puntos a procesar.
*/

//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h> 

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes
	
	int f,p,x,y,cuadra1=0,cuadra2=0,cuadra3=0,cuadra4=0;
	
	printf("¿Cuántos puntos se desea representar en el plano?");
	scanf("%i",&p);
	
	for(f=1;f<=p;f++){
		printf("\nPunto número %i\n",f);
		printf("Introduce la coordenada X (horizontal): ");
		scanf("%i",&x);
		printf("Introduce la coordenada Y (vertical): ");
		scanf("%i",&y);
		
		if (x>=1 && y>=1) {
			cuadra1=cuadra1+1;
		} else if (x<=-1 && y>=1) {
			cuadra2=cuadra2+1;
		} else if (x>=1 && y<=-1) {
			cuadra3=cuadra3+1;
		} else if (x<=-1 && y<=-1) {
			cuadra4=cuadra4+1;
		}
	}
	
	printf("\n\nSe han introducido un total de %i puntos, de los cuales:",p);
	printf("\n%i se encuentran en el primer cuadrante", cuadra1);
	printf("\n%i se encuentran en el segundo cuadrante", cuadra2);
	printf("\n%i se encuentran en el tercer cuadrante", cuadra3);
	printf("\n%i se encuentran en el cuarto cuadrante", cuadra4);

	
	getch();
	return 0;
}
