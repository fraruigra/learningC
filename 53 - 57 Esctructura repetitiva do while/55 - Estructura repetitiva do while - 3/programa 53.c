/* ENUNCIADO
Realizar un programa que permita ingresar el peso (en kilogramos) de piezas. El proceso termina 
cuando ingresamos el valor 0. Se debe informar:
a) ¿Cuántas piezas tienen un peso entre 9.8 Kg. y 10.2 Kg.?, 
	¿Cuántas con más de 10.2 Kg.? y ¿Cuántas con menos de 9.8 Kg.?
b) La cantidad total de piezas procesadas.
*/

//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h> 

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes
	
	int total=0, medium_weight=0, high_weight=0, low_weight=0;
	float li;
	
	printf("Si desea salir por favor introduzca 0.\n\n\n");

	do {
		printf("Introduce el peso de la pieza (En kilogramos): ");
		scanf("%f",&li);
		total++;
		if (li>10.2) {
			high_weight++;
		} else if (li<=10.2 && li>=9.8) {
			medium_weight++;
		} else if (li<9.8 && li>0) {
			low_weight++;
		}
	} while (li!=0);
	
	total--;
	printf("\n\nSe han introducido un total de %i piezas.",total);
	printf("\nDe ese total piezas, %i han sido de un pesaje superior a 10,2 kg.",high_weight);
	printf("\nDe ese total piezas, %i han sido de un pesaje normal, de entre 9,2 y 10,2 kg.",medium_weight);
	printf("\nDe ese total piezas, %i han sido de un pesaje inferior a 9,8 kg.",low_weight);

	
	getch();
	return 0;
}
