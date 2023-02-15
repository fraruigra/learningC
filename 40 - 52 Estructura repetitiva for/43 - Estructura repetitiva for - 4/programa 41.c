/* ENUNCIADO
Escribir un programa que lea 10 n�meros enteros y luego muestre cu�ntos valores 
ingresados fueron m�ltiplos de 3 y cu�ntos de 5.
Debemos tener en cuenta que hay n�meros que son m�ltiplos de 3 y de 5 a la vez.
*/

//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h> 

#define max 10

int main ()
{
	setlocale(LC_ALL, ""); //Impresi�n de tildes
	int i, f, multiplo3=0, multiplo5=0, multiploNone=0;
	
	for (f=1; f<=max; f++) {
		
		printf("Introduce el %i� valor: ", f);
		scanf("%i",&i);
		
		if (i%3==0 && i%5==0) {
			multiplo3 = multiplo3 + 1;
			multiplo5 = multiplo5 + 1;
		} else if (i%3==0) {
			multiplo3 = multiplo3 + 1;
		} else if (i%5==0) {
			multiplo5 = multiplo5 + 1;
		} else {
			multiploNone = multiploNone + 1;
		}
	}
	
		printf("\n\nSe han encontrado %i m�ltiplos de 3.", multiplo3);
		printf("\n\nSe han encontrado %i m�ltiplos de 5.", multiplo5);
		printf("\n\n%i valores no son m�ltiplos ni de 3 ni de 5.", multiploNone);
	
	getch();
	return 0;
}
