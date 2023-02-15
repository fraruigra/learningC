/* ENUNCIADO
Desarrollar un programa que solicite la carga de 10 números e imprima la suma de los últimos 5 valores ingresados.
*/

//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h> 

#define limit 10
#define halfLimit 5

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes
	int f, i, iSum=0;
	
	for (f=1; f<=limit; f++) {
		printf("Introduzca el %iº valor: ",f);
		scanf("%i",&i);
		if (f>halfLimit && f<=limit) {
			iSum = iSum + i;
		}
	}
	
	printf("\n\nLa suma de los últimos cinco dígitos introducidos es de: %i",iSum);
	
	getch();
	return 0;
}
