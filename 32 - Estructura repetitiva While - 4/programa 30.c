//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h> 

/* ENUNCIADO
Una planta que fabrica perfiles de hierro posee un lote de n piezas.
Confeccionar un programa que pida ingresar por teclado la cantidad de piezas a procesar 
y luego ingrese la longitud de cada perfil; sabiendo que la pieza cuya longitud esté 
comprendida en el rango de 1.20 y 1.30 son aptas. 
Imprimir por pantalla la cantidad de piezas aptas que hay en el lote.
*/

int main ()
{
	setlocale(LC_ALL, "");

	int n,x,cantidad;
	float li;
	x=1;
	cantidad=0;
	
	printf("Introduzca la cantidad de piezas a procesar: ");
	scanf("%i",&n);
	
	while (x <= n) {
		printf("Introduzca la longitud de las piezas (en cm): ");
		scanf("%f",&li); 
		if (li>=1.20 && li<=1.30) {
			cantidad = cantidad + 1;
		}
		x=x+1;
	}
	
	printf("\n\nEl número de piezas introducidas es %i",n);
	printf("\nEl número de piezas aptas son: %i",cantidad);
	
	getch();
	return 0;
}
