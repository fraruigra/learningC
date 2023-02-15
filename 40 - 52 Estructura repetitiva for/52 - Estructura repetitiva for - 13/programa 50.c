/* ENUNCIADO
Se cuenta con la siguiente información:
Las edades de 5 estudiantes del turno mañana.
Las edades de 6 estudiantes del turno tarde.
Las edades de 11 estudiantes del turno noche.
Las edades de cada estudiante deben ingresarse por teclado.
a) Obtener el promedio de las edades de cada turno (tres promedios)
b) Imprimir dichos promedios (promedio de cada turno)
c) Mostrar por pantalla un mensaje que indique cual de los tres turnos tiene un promedio de edades menor.
*/

//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h> 

#define turnoMan 5
#define turnoTar 6
#define turnoNoc 11
#define alumnosTot 22

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes
		//Declarar variables
	int f, i=1, edad, edadMan=0, edadTar=0, edadNoc=0, edadTot=0;
	float manFlo, tarFlo, nocFlo, totFlo, promedioMan, promedioTar, promedioNoc, promedioTot;
		//ciclo For
	for (f=1;f<=alumnosTot;f++){
		if(f>=1 && f<=5) { //Alumnos de mañana
			printf("Introduce la edad del %iº alumno del turno de mañana: ",i);
			scanf("%i",&edad);
			edadMan=edadMan+edad;
			edadTot=edadTot+edad;
			i++;
		} else if (f>=6 && f<=11) { //Alumnos de tarde
				if (f==6) {
					printf("\n");
					i=1;
				}
			printf("Introduce la edad del %iº alumno del turno de tarde: ",i);
			scanf("%i",&edad);
			edadTar=edadTar+edad;
			edadTot=edadTot+edad;
			i++;
		} else if (f>=12 && f<=22) { //Alumnos de noche
				if (f==12) {
					printf("\n");
					i=1;
				}		
			printf("Introduce la edad del %iº alumno del turno de noche: ",i);
			scanf("%i",&edad);
			edadNoc=edadNoc+edad;
			edadTot=edadTot+edad;
			i++;
		}
	}
		//Transformar el total de edades en float
	manFlo=edadMan;
	tarFlo=edadTar;
	nocFlo=edadNoc;
	totFlo=edadTot;
		//Calcular promedio de edades
	promedioMan=manFlo/turnoMan;
	promedioTar=tarFlo/turnoTar;
	promedioNoc=nocFlo/turnoNoc;
	promedioTot=totFlo/alumnosTot;
		//Imprimir promedios
	printf("\n\nEl promedio de edad de los alumnos del turno de día es: %.2f",promedioMan);
	printf("\nEl promedio de edad de los alumnos del turno de tare es: %.2f",promedioTar);
	printf("\nEl promedio de edad de los alumnos del turno de noche es: %.2f",promedioNoc);
	printf("\nEl promedio de edad de todos los alumnos es: %.2f",promedioTot);
		//Hallar e imprimir promedio menor
	if (promedioMan<promedioTar && promedioMan<promedioNoc){
		printf("\n\nLa edad promedio de los alumnos del turno de mañana es menor que la del resto de grupos.");
	} else if (promedioTar<promedioMan && promedioTar<promedioNoc) {
		printf("\n\nLa edad promedio de los alumnos del turno de tarde es menor que la del resto de grupos.");		
	} else if (promedioNoc<promedioMan && promedioNoc<promedioTar) {
		printf("\n\nLa edad promedio de los alumnos del turno de noche es menor que la del resto de grupos.");
	}
	
	getch();
	return 0;
}
