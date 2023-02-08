/* ENUNCIADO
Realizar un programa que permita cargar dos listas de 15 valores cada una. 
Informar con un mensaje cual de las dos listas tiene un valor acumulado mayor 
(mensajes "Lista 1 mayor", "Lista 2 mayor", "Listas iguales")
Tener en cuenta que puede haber dos o más estructuras repetitivas en un algoritmo.
*/

//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h> 

#define limit 15

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes

	int lista1,lista2,i=1,sum_lista1 = 0,sum_lista2 = 0;
	
	printf("Inicio de la lista 1\n\n");
	
	while (i<=limit) {
		printf ("Ingrese el %iº valor de la primera lista: ",i);
		scanf("%i",&lista1);
		sum_lista1 = sum_lista1 + lista1;
		i = i+1;
	}
	
	i = 1;
	
	printf("\n\nInicio de la lista 2\n\n");
	
	while (i<=limit) {
		printf ("Ingrese el %iº valor de la segunda lista: ",i);
		scanf("%i",&lista2);
		sum_lista2 = sum_lista2 + lista2;
		i = i + 1;
	}
	
	if (sum_lista1 > sum_lista2) {
		printf("\nEl sumatorio de los valores de la primera lista es superior al de la segunda.");
	} else if (sum_lista1 < sum_lista2) {
		printf("\nEl sumatorio de los valores de la segunda lista es superior al de la primera.");
	} else if (sum_lista1 == sum_lista2) {
		printf("\nEl resultado de ambos sumatorios es indéntico.");
	}
	
	getch();
	return 0;
}
