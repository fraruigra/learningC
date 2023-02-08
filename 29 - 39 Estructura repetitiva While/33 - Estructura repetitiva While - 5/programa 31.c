//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h> 

/* ENUNCIADO
Escribir un programa que solicite ingresar 10 notas de alumnos y nos informe cuántos 
tienen notas mayores o iguales a 7 y cuántos menores.
*/

int main ()
{
	setlocale(LC_ALL, "");

	int alumnos_superior,alumnos_inferior,x;
	float nota;
	
	x=1,alumnos_superior=0,alumnos_inferior=0;
	
	while (x<=10){
		printf("Ingrese la nota del %ier alumno (del 0 al 10): ",x);
		scanf("%f",&nota);
		if (nota >= 7){
			alumnos_superior=alumnos_superior+1;
		} else if (nota <= 7){
			alumnos_inferior=alumnos_inferior+1;
		}
		x=x+1;
	}
	
	printf("\n\nLos alumnos que han sacado una nota superior a 7 son: %i",alumnos_superior);
	printf("\n\nLos alumnos que han sacado una nota inferior a 7 son: %i",alumnos_inferior);

	
	getch();
	return 0;
}
