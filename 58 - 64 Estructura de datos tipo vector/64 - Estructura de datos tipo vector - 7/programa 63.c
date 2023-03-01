/* ENUNCIADO
Cargar un vector de 10 elementos y verificar posteriormente si el mismo est� ordenado de menor a mayor.
*/

//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h> 
#include<stdbool.h>

#define MAX 10

int main ()
{
	setlocale(LC_ALL, ""); //Impresi�n de tildes
	
	int f, vector[MAX];
	bool orden;
	
	for(f=1;f<=MAX;f++){
		printf("Introduce el valor en la %i� posici�n: ",f);
		scanf("%i",&vector[f]);
	}
	
	for (f=1;f<=MAX-1;f++){
		if (vector[f+1]<=vector[f]){
			orden=false;
			goto end;
		} else {
			orden=true;
		}
	}
	
	end:
	
	if (orden==false) {
		printf("\n\nLos n�meros introducidos no est�n ordenados.");
	} else {
		printf("\n\nLos n�meros introducidos est�n ordenados de menor a mayor.");
	}
	
	getch();
	return 0;
}
