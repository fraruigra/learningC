/* ENUNCIADO
Realizar un programa que imprima 25 términos de la serie 11 - 22 - 33 - 44, etc. 
(No se ingresan valores por teclado)
*/

//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include <wchar.h>
#include <locale.h> 

#define limit 25

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes

	int i=1, serie=0;
	
	while (i<=limit) {
		serie = serie + 11;
		printf("%i", serie);
		
		if (i>=1 && i<=24) {
			printf(" - ");
		} else {
			printf(".");
		}
		
		i = i + 1;
	}
	
	getch();
	return 0;
}
