/* ENUNCIADO
Realizar un programa que imprima en pantalla los números del 1 al 100.
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
	
	for (f=1; f<=100; f++) {
		printf("%i",f);
		if (f >= 1 && f <= 99) {
			printf(" - ");
		}
	}
	
	getch();
	return 0;
}
