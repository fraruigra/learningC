/* ENUNCIADO
Escribir un programa que lea n números enteros y calcule la cantidad de valores mayores o iguales a 1000.
Este tipo de problemas también se puede resolver empleando la estructura repetitiva for. 
Lo primero que se hace es cargar una variable que indique la cantidad de valores a ingresar. 
Dicha variable se carga antes de entrar a la estructura repetitiva for.
La estructura for permite que el valor inicial o final dependa de una variable cargada previamente por teclado.
*/

//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h>

#define min 1000 

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes
	
	int n, f, i, valorSup=0, valorInf=0;
	
	printf("Ingrese el número de valores a ingresar: ");
	scanf("%i", &n);
	
	for (f=1; f<=n; f++) {
		printf("Ingrese el %iº valor: ",f);
		scanf("%i",&i);
		if (i>=min) {
			valorSup = valorSup + 1;
		} else {
			valorInf = valorInf + 1;
		}
	}
	
	printf("\n\nSe han introducido %i valores superiores a %i",valorSup,min);
	printf("\nSe han introducido %i valores inferiores a %i",valorInf,min);
	
	getch();
	return 0;
}
