/* ENUNCIADO
Realizar un programa que pida la carga de dos vectores numéricos enteros de 4 elementos. 
Obtener la suma de los dos vectores, dicho resultado guardarlo en un tercer vector del mismo tamaño. 
Sumar componente a componente.
*/

//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h> 

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes
	
	int f,vector1[4],vector2[4],vector3[4],suma[3];
	
	for (f=1;f<=4;f++){
		printf("Introduce el %iº valor del primer vector: ",f);
		scanf("%i",&vector1[f]);
		suma[1]=suma[1]+vector1[f];
	}
	
	printf("\n");
	for (f=1;f<=4;f++){
		printf("Introduce el %iº valor del segundo vector: ",f);
		scanf("%i",&vector2[f]);
		suma[2]=suma[2]+vector2[f];
	}
	
	printf("\n");
	for (f=1;f<=4;f++){
		vector3[f]=vector1[f]+vector2[f];
		printf("\nLa suma del %iº valor introducidos en los vectores es: %i",f,vector3[f]);
		suma[3]=suma[3]+vector3[f];
			if (f==4){
				printf("\n\nLa suma de todos los datos introducidos en los vectores es de: %i",suma[3]);
			}
	}
	
	getch();
	return 0;
}
