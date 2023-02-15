/* ENUNCIADO
Desarrollar un programa que solicite la carga de 10 n�meros e imprima la suma de los �ltimos 5 valores ingresados.
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
	setlocale(LC_ALL, ""); //Impresi�n de tildes
	int f, i, iSum=0;
	
	for (f=1; f<=limit; f++) {
		printf("Introduzca el %i� valor: ",f);
		scanf("%i",&i);
		if (f>halfLimit && f<=limit) {
			iSum = iSum + i;
		}
	}
	
	printf("\n\nLa suma de los �ltimos cinco d�gitos introducidos es de: %i",iSum);
	
	getch();
	return 0;
}
