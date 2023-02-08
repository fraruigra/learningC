/* ENUNCIADO
Mostrar todos los múltiplos de 8 que hay hasta el valor 500.
Debe aparecer en pantalla 8 - 16 - 24, etc.
*/

//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include <wchar.h>
#include <locale.h> 

#define limit 500

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes

	int i=1,tablaDeSeis=6;
	
	while (tablaDeSeis<=limit) {
		printf ("%i",tablaDeSeis);
		tablaDeSeis = 6 * i;
		
		if (tablaDeSeis>=1 && tablaDeSeis<=limit) {
			printf(" - ");
		} else {
			printf(".");
		}
		
		i = i + 1;
	}
	
	getch();
	return 0;
}
