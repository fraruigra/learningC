/* ENUNCIADO
Desarrollar un programa que permita la carga de 10 valores por teclado y nos muestre posteriormente 
la suma de los valores ingresados y su promedio. Este problema ya lo desarrollamos empleando el while, 
lo resolveremos empleando la estructura for.
*/

//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h> 

#define limit 10

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes

	int f, valor, valor_sum=0;
	float valor_sum_flo, promedio;
	
	for (f=1;f<=10;f++) {
		printf("Introduce el %iº valor: ",f);
		scanf("%i",&valor);
		valor_sum = valor_sum + valor;
	}
	
	valor_sum_flo = valor_sum;
	promedio = valor_sum_flo/limit;
	
	printf("\n\nLa suma de los valores introducidos es %i.",valor_sum);
	printf("\nEl promedio de los valores introducidos es %.2f.",promedio);
	
	getch();
	return 0;
}
