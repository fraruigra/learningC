/* ENUNCIADO
Realizar un programa que lea los lados de n triángulos, e informar:
a) De cada uno de ellos, qué tipo de triángulo es: equilátero 
(tres lados iguales), isósceles (dos lados iguales), o escaleno (ningún lado igual)
b) Cantidad de triángulos de cada tipo.
c) Tipo de triángulo que posee menor cantidad.
*/

//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h> 

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes

	int f, t, equi_tot=0, isos_tot=0, escal_tot=0;
	float lado1, lado2, lado3;
	
	printf("¿Cuántos triángulos desea introducir? ");
	scanf("%i",&t);
	
	for(f=1;f<=t;f++) {
		printf("Introduzca el tamaño del lado base: ");
		scanf("%f",&lado1);
		printf("Introduzca el tamaño del lado izquierdo: ");
		scanf("%f",&lado2);
		printf("Introduzca el tamaño del lado derecho: ");
		scanf("%f",&lado3);
			if (lado1 == lado2 && lado2==lado3) {
				printf("Ha introducido un triángulo equilátero\n");
				equi_tot=equi_tot+1;
			} else if (lado1==lado2 || lado1==lado3 || lado2==lado3) {
				printf("Ha introducido un triángulo isósceles\n");
				isos_tot=isos_tot+1;
			} else {
				printf("Ha introducido un triángulo escaleno\n");
				escal_tot=escal_tot+1;
			}
	}
	
	printf("\n\nHa introducido:\n%i triángulos equiláteros\n%i triángulos isósceles\n%i triángulos escalenos",equi_tot,isos_tot,escal_tot);
	
	if (equi_tot<=isos_tot && equi_tot<=escal_tot) {
		printf("\n\nEl tipo de triángulo que posee una menor cantidad es el triángulo equilátero.");
	} else if (isos_tot<=equi_tot && isos_tot<=escal_tot) {
		printf("\n\nEl tipo de triángulo que posee una menor cantidad es el triángulo isósceles.");
	} else if (escal_tot<=equi_tot && escal_tot<=isos_tot) {
		printf("\n\nEl tipo de triángulo que posee una menor cantidad es el triángulo escaleno.");
	}
	
	getch();
	return 0;
}
