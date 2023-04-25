/* ENUNCIADO
Definir tres variables de tipo char y cargar dos por asignación y la tercera por teclado. Imprimir los valores de las mismas.

*/

//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h> 

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes
	
	char letra1=65, letra2='A', letra3;
	
	printf("Las letras 1 y 2 están introducidas, por favor introduzca la letra 3: ");
	scanf("%c",&letra3);
	
	printf("\nLa letra 1 es %c.", letra1);
	printf("\nLa letra 3 es %c.", letra2);
	printf("\nLa letra 3 es %c.", letra3);
	
	getch();
	return 0;
}
