/* ENUNCIADO
Se tienen las notas del primer parcial de los alumnos de dos cursos, el curso A y el curso B, 
cada curso cuenta con 5 alumnos.
Realizar un programa que muestre el curso que obtuvo el mayor promedio general.
*/

//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h> 

#define alumMAX 5

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes
	
	int f;
	float notasCursoA[alumMAX], notasCursoB[alumMAX], totCursoA=0, totCursoB=0, promCursoA, promCursoB;
	
	//Notas y promedio curso A
	for (f=1;f<=alumMAX;f++){
		printf("Introduzca la nota del %iº alumno del curso A: ",f);
		scanf("%f",&notasCursoA[f]);
		totCursoA=totCursoA+notasCursoA[f];
	}
	promCursoA=totCursoA/alumMAX;
	
	printf("\n\n");
	
	//Notas y promedio curso B
	for (f=1;f<=alumMAX;f++){
		printf("Introduzca la nota del %iº alumno del curso B: ",f);
		scanf("%f",&notasCursoB[f]);
		totCursoB=totCursoB+notasCursoB[f];
	}
	promCursoB=totCursoB/alumMAX;
	
	//Imprimir promedio más alto
	if (promCursoA>promCursoB){
		printf("\n\nLa nota media del curso A (%.2f) es superior a la del curso B (%.2f)",promCursoA,promCursoB);
	} else if (promCursoA<promCursoB){
		printf("\n\nLa nota media del curso B (%.2f) es superior a la del curso A (%.2f)",promCursoB,promCursoA);
	} else if (promCursoA==promCursoB){
		printf("\n\nLa nota media del curso A (%.2f) es idéntica a la del curso B (%.2f)",promCursoA,promCursoB);
	} 
	
	getch();
	return 0;
}
