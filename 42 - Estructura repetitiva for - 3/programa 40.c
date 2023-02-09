/* ENUNCIADO
Escribir un programa que lea 10 notas de alumnos y nos informe cuántos tienen notas mayores o iguales a 7 y cuántos menores.

Para resolver este problema se requieren tres contadores:
aprobados (Cuenta la cantidad de alumnos aprobados)
suspenso (Cuenta la cantidad de reprobados)
f (es el contador del for)
*/

//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h> 

#define alumnosMAX 10

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes
	int f, aprobado=0, suspenso=0;
	float nota;
	
	for (f=1; f<=alumnosMAX; f++) {
		printf("Introduce la nota del %iº alumno: ",f);
		scanf("%f",&nota);
		
		if (nota >= 7.00) {
			aprobado = aprobado + 1;
		} else {
			suspenso = suspenso + 1;
		}
	}
	
	printf("\n\nHan aprobado %i alumnos.", aprobado);
	printf("\nHan suspendido %i alumnos",suspenso);
	
	getch();
	return 0;
}
