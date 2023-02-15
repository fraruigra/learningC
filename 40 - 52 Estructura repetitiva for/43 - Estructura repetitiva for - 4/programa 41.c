/* ENUNCIADO
Escribir un programa que lea 10 números enteros y luego muestre cuántos valores 
ingresados fueron múltiplos de 3 y cuántos de 5.
Debemos tener en cuenta que hay números que son múltiplos de 3 y de 5 a la vez.
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
	int i, f, multiplo3=0, multiplo5=0, multiploNone=0;
	
	for (f=1; f<=max; f++) {
		
		printf("Introduce el %iº valor: ", f);
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
	
		printf("\n\nSe han encontrado %i múltiplos de 3.", multiplo3);
		printf("\n\nSe han encontrado %i múltiplos de 5.", multiplo5);
		printf("\n\n%i valores no son múltiplos ni de 3 ni de 5.", multiploNone);
	
	getch();
	return 0;
}
