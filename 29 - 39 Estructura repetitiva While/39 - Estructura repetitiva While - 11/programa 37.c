/* ENUNCIADO
Desarrollar un programa que permita cargar n n�meros enteros y luego nos informe cu�ntos valores 
fueron pares y cu�ntos impares.
Emplear el operador �%� en la condici�n de la estructura condicional (este operador retorna 
el resto de la divisi�n de dos valores, por ejemplo 11%2 retorna un 1):
	if (valor%2==0)         //Si el if da verdadero luego es par.
*/

//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h> 

int main ()
{
	setlocale(LC_ALL, ""); //Impresi�n de tildes

	int i=1,n,valor,impar=0,par=0;
	
	printf("�Cu�ntos valores desea introducir?\n");
	scanf("%i",&n);
	
	while (i<=n) {
		printf("Introduce el %i� valor entero: ",i);
		scanf("%i",&valor);
		if (valor%2==00) {
			par = par + 1;
		} else {
			impar = impar + 1;
		}
		i = i + 1;
	}
	
	printf("\n\nSe han introducido %i valores, de los cuales %i eran pares y %i eran impares.",n,par,impar);
	
	getch();
	return 0;
}
