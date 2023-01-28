//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include <wchar.h>
#include <locale.h> 

/* ENUNCIADO
Realizar un programa que imprima en pantalla los números del 1 al 100.
*/

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes

	int x;
	
	//Números de 1 en 1
	
	printf("Números de 1 en 1:\n");

	x=0;
	
	while (x<=100){
		printf("%i",x);
		x=x+1;
		if (x>=1 && x<=100){
			printf("-");
		} 
	}
	
	printf("\n\n\n"); //Separación
	
	//Números de 2 en 2
	
	printf("Números de 2 en 2:\n");
	
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
