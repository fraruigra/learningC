/* ENUNCIADO
Confeccionar un programa que solicite la carga de dos valores enteros por teclado. 
Luego solicitar que se cargue alguno de los caracteres: '+', '-', '*' o '/'.
Seg�n el caracter ingresado proceder a mostrar la sumar, resta, multiplicaci�n o divisi�n de los valores ingresados.
*/

//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h> 

int main ()
{
	setlocale(LC_ALL, ""); //Impresi�n de tildes
	int valor1, valor2;
	char letra;
	
	printf("Por favor ingrese el valor 1: ");
	scanf("%i", &valor1);
	printf("Por favor ingrese el valor 2: ");
	scanf("%i", &valor2);
	
	do {
		printf("\nIntroduzca qu� operaci�n quiere realizar (+ � - � * � /): ");
		scanf(" %c", &letra);
		if (letra == '+') { //suma
			printf("El resultado de la suma es: %i", valor1+valor2);
		} else if (letra == '-') { //resta
			printf("El resultado de la resta es: %i", valor1-valor2);
		} else if (letra == '*') { //multiplicaci�n
			printf("El resultado de la multiplicaci�n es: %i", valor1*valor2);
		} else if (letra == '/') { //divisi�n
			printf("El resultado de la divisi�n de %i entre %i es: %i", valor1, valor2, valor1/valor2);
			printf("\nEl resultado de la divisi�n de %i entre %i es: %i", valor2, valor1, valor2/valor1);
		}
		
		printf("\n�Desea realizar alguna otra operaci�n con los n�meros introducidos? [s/n]\n");
		scanf(" %c",&letra);
	} while (letra=='s');
	
	getch();
	return 0;
}
