/* ENUNCIADO
Se realiza la carga de 10 valores enteros por teclado. Se desea conocer:
a) La cantidad de valores ingresados negativos.
b) La cantidad de valores ingresados positivos.
c) La cantidad de múltiplos de 15.
d) El valor acumulado de los números ingresados que son pares.
*/

//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h> 

#define max 10

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes
	
	int f, v, esMult15=0, esPar=0;
	
	for (f=1;f<=max;f++){
		printf("Ingrese el %iº valor: ",f);
		scanf("%i",&v);
		if (v%2==0){
			esPar++;
		} else if (v%15==0) {
			esMult15++;
		}
	}
	
	printf("\n\nHay un total de %i valores pares.",esPar);
	printf("\nHay un total de %i valores múltiplos de 15.",esMult15);
	
	getch();
	return 0;
}
