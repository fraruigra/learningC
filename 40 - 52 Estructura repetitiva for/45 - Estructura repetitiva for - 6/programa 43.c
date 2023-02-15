/* ENUNCIADO
Confeccionar un programa que lea n pares de datos, cada par de datos corresponde a 
la medida de la base y la altura de un triángulo. El programa deberá informar:
a) De cada triángulo la medida de su base, su altura y su superficie.
b) La cantidad de triángulos cuya superficie es mayor a 12.
*/

//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h> 

#define superficieMin 12.00

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes
	
	int n,f,superficieMayor=0;
	float base, altura, superficie;
	
	printf("¿Cuántos triángulos desea procesar? ");
	scanf("%i",&n);
	printf("\n");
	
	for (f=1; f<=n; f++) {
		printf("Introduzca la base del %iº triángulo: ",f);
		scanf("%f",&base);
		printf("Introduzca la altura del %iº triángulo: ",f);
		scanf("%f",&altura);
		superficie = (altura * base) / 2;
		if (superficie>=superficieMin){
			superficieMayor = superficieMayor + 1;
		}
		printf("\nLa superficie del %iº triángulo es: %.f\n\n",f,superficie);
	}
	
	printf("\n\nHay un total de %i triángulos cuya superficie es superior a %.2f.",superficieMayor,superficieMin);
	
	getch();
	return 0;
}
