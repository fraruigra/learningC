/* ENUNCIADO
Se desea guardar los sueldos de 5 operarios.
Según lo conocido deberíamos definir 5 variables si queremos tener en un cierto momento 
los 5 sueldos almacenados en memoria.
Empleando un vector solo se requiere definir un único nombre y accedemos a cada elemento por medio del subíndice.
*/

//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h> 

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes
	
	int f, sueldos[5];
	
	//carga del vector
	
	for (f=1;f<=5;f++){
		printf("Ingrese valor del sueldo: ");
		scanf("%i",&sueldos[f]);
	}
	printf("\n\nListado de sueldos.\n");
	//Impresión del vector
	for(f=1;f<=5;f++){
		printf("%i\n",sueldos[f]);
	}
	
	getch();
	return 0;
}
