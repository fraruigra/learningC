#include<stdio.h>
#include<conio.h>
#include <wchar.h>
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes

	int preguntasTot, preguntasCorrect, nivel;
	
	printf("Ingrese el número de preguntas realizadas al postulante: ");
	scanf("%i",&preguntasTot);
	printf("Ingrese el número de preguntas que el postulante respondió correctamente: ");
	scanf("%i",&preguntasCorrect);
	nivel=(preguntasCorrect*100)/preguntasTot;
	
	if (nivel >= 90) {
		printf("\nEl postulante ha obtenido el nivel máximo (%i).",nivel);
	} else if (nivel <= 89 && nivel >= 75) {
		printf("\nEl postulante ha obtenido un nivel medio (%i).", nivel);
	} else if (nivel <= 74 && nivel >= 50) {
		printf("\nEl postulante ha obtenido un nivel regular (%i).", nivel);
	} else {
		printf("\nEl postulante no ha obtenido el nivel mínimo (%i).", nivel);
	}
		
	getch();
	return 0;
}
