/* ENUNCIADO
Desarrollar un programa que muestre la tabla de multiplicar del 5 (del 5 al 50)
*/

//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h> 

#define maxTabla 10

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes
	
	int f,producto=0;
	
	for (f=1; f<=maxTabla; f++) {
		producto = 5 * f;
		printf ("5 x %i: %i\n",f,producto);
	}
	
	getch();
	return 0;
}
