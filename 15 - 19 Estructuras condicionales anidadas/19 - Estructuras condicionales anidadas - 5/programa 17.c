#include<stdio.h>
#include<conio.h>
#include <wchar.h>
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, ""); //Impresi�n de tildes

	int preguntasTot, preguntasCorrect, nivel;
	
	printf("Ingrese el n�mero de preguntas realizadas al postulante: ");
	scanf("%i",&preguntasTot);
	printf("Ingrese el n�mero de preguntas que el postulante respondi� correctamente: ");
	scanf("%i",&preguntasCorrect);
	nivel=(preguntasCorrect*100)/preguntasTot;
	
	if (nivel >= 90) {
		printf("\nEl postulante ha obtenido el nivel m�ximo (%i).",nivel);
	} else if (nivel <= 89 && nivel >= 75) {
		printf("\nEl postulante ha obtenido un nivel medio (%i).", nivel);
	} else if (nivel <= 74 && nivel >= 50) {
		printf("\nEl postulante ha obtenido un nivel regular (%i).", nivel);
	} else {
		printf("\nEl postulante no ha obtenido el nivel m�nimo (%i).", nivel);
	}
		
	getch();
	return 0;
}
