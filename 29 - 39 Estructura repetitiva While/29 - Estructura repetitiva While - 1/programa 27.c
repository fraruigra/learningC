//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include <wchar.h>
#include <locale.h> 

/* ENUNCIADO
Realizar un programa que imprima en pantalla los n�meros del 1 al 100.
*/

int main ()
{
	setlocale(LC_ALL, ""); //Impresi�n de tildes

	int x;
	
	//N�meros de 1 en 1
	
	printf("N�meros de 1 en 1:\n");

	x=0;
	
	while (x<=100){
		printf("%i",x);
		x=x+1;
		if (x>=1 && x<=100){
			printf("-");
		} 
	}
	
	printf("\n\n\n"); //Separaci�n
	
	//N�meros de 2 en 2
	
	printf("N�meros de 2 en 2:\n");
	
	x=0;
	
	while (x<=100){
		printf("%i",x);
		x=x+2;
		if (x>=1 && x<=100){
			printf("-");
		} 
	}
	
	getch();
	return 0;
}
