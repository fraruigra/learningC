/* ENUNCIADO
Una empresa tiene dos turnos (mañana y tarde) en los que trabajan 8 empleados (4 por la mañana y 4 por la tarde)
Confeccionar un programa que permita almacenar los sueldos de los empleados agrupados 
por turno (definir los dos vectores con componentes de tipo float)

Imprimir los gastos en sueldos de cada turno.
*/

//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h> 

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes
	
	int f;
	float sueldoTurnoManana[4],sueldoTurnoTarde[4],sueldoTotalManana=0,sueldoTotalTarde=0,sueldoTotal=0;
	
	printf("Comienzo del turno de mañana.\n\n");
	
	for(f=1;f<=4;f++){
		printf("Introduce el sueldo del %iº trabajador del turno de mañana: ",f);
		scanf("%f",&sueldoTurnoManana[f]);
		sueldoTotalManana=sueldoTotalManana+sueldoTurnoManana[f];
	}
	
	printf("\n\nComienzo del turno de tarde.\n\n");
	
	for(f=1;f<=4;f++){
		printf("Introduce el sueldo del %iº trabajador del turno de tarde: ",f);
		scanf("%f",&sueldoTurnoTarde[f]);
		sueldoTotalTarde=sueldoTotalTarde+sueldoTurnoTarde[f];
	}
	
	sueldoTotal=sueldoTotalManana+sueldoTotalTarde;
	
	printf("\n\nEl gasto total en sueldo es: %.2f",sueldoTotal);
	printf("\nEl gasto total en sueldo del turno de mañana es: %.2f",sueldoTotalManana);	
	printf("\nEl gasto total en sueldo del turno de tarde es: %.2f",sueldoTotalTarde);
		
	getch();
	return 0;
}
