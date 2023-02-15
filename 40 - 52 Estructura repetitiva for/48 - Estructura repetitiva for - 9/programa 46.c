/* ENUNCIADO
Confeccionar un programa que permita ingresar un valor del 1 al 10 y nos muestre 
la tabla de multiplicar del mismo (los primeros 12 t�rminos)
Ejemplo: Si ingreso 3 deber� aparecer en pantalla los valores 3, 6, 9, hasta el 36.
*/

//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h> 

#define tablaMax 12

int main ()
{
	setlocale(LC_ALL, ""); //Impresi�n de tildes
	
	int f, i, producto=0;
	
	printf("�De qu� n�mero desea ver la tabla?: ");
	scanf("%i",&i);
	printf("\n");
	
	for (f=1;f<=tablaMax;f++){
		producto = i * f;
		printf("%i x %i: %i\n", i,f,producto);
	}
	
	getch();
	return 0;
}
