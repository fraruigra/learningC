/* ENUNCIADO
Realizar un programa que lea los lados de n tri�ngulos, e informar:
a) De cada uno de ellos, qu� tipo de tri�ngulo es: equil�tero 
(tres lados iguales), is�sceles (dos lados iguales), o escaleno (ning�n lado igual)
b) Cantidad de tri�ngulos de cada tipo.
c) Tipo de tri�ngulo que posee menor cantidad.
*/

//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h> 

int main ()
{
	setlocale(LC_ALL, ""); //Impresi�n de tildes

	int f, t, equi_tot=0, isos_tot=0, escal_tot=0;
	float lado1, lado2, lado3;
	
	printf("�Cu�ntos tri�ngulos desea introducir? ");
	scanf("%i",&t);
	
	for(f=1;f<=t;f++) {
		printf("Introduzca el tama�o del lado base: ");
		scanf("%f",&lado1);
		printf("Introduzca el tama�o del lado izquierdo: ");
		scanf("%f",&lado2);
		printf("Introduzca el tama�o del lado derecho: ");
		scanf("%f",&lado3);
			if (lado1 == lado2 && lado2==lado3) {
				printf("Ha introducido un tri�ngulo equil�tero\n");
				equi_tot=equi_tot+1;
			} else if (lado1==lado2 || lado1==lado3 || lado2==lado3) {
				printf("Ha introducido un tri�ngulo is�sceles\n");
				isos_tot=isos_tot+1;
			} else {
				printf("Ha introducido un tri�ngulo escaleno\n");
				escal_tot=escal_tot+1;
			}
	}
	
	printf("\n\nHa introducido:\n%i tri�ngulos equil�teros\n%i tri�ngulos is�sceles\n%i tri�ngulos escalenos",equi_tot,isos_tot,escal_tot);
	
	if (equi_tot<=isos_tot && equi_tot<=escal_tot) {
		printf("\n\nEl tipo de tri�ngulo que posee una menor cantidad es el tri�ngulo equil�tero.");
	} else if (isos_tot<=equi_tot && isos_tot<=escal_tot) {
		printf("\n\nEl tipo de tri�ngulo que posee una menor cantidad es el tri�ngulo is�sceles.");
	} else if (escal_tot<=equi_tot && escal_tot<=isos_tot) {
		printf("\n\nEl tipo de tri�ngulo que posee una menor cantidad es el tri�ngulo escaleno.");
	}
	
	getch();
	return 0;
}
