#include<stdio.h>
#include<conio.h>
#include <wchar.h>
#include <locale.h> 

/* ENUNCIADO
De un operario se conoce su sueldo y los años de antigüedad. Se pide confeccionar un programa que lea 
los datos de entrada e informe:
a) Si el sueldo es inferior a 500 y su antigüedad es igual o superior a 10 años, otorgarle un aumento 
del 20 %, mostrar el sueldo a pagar.
b)Si el sueldo es inferior a 500 pero su antigüedad es menor a 10 años, otorgarle un aumento de 5 %.
c) Si el sueldo es mayor o igual a 500 mostrar el sueldo en pantalla sin cambios.
*/

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes

	int antiguedad;
	float sueldo,nuevoSueldo,diferencia;
	
	printf("Introduce la antigüedad (en años) del trabajador: ");
	scanf("%i", &antiguedad);
	printf("Introduce el suelo (en euros) del trabajador: ");
	scanf("%f", &sueldo);
	
	if (sueldo < 500 && antiguedad >= 10){
		nuevoSueldo = sueldo*1.20;
		diferencia = nuevoSueldo-sueldo;
		printf("\nEl nuevo sueldo del empleado será de %.2f. Lo que supone un incremento de %.2f euros respecto a su sueldo actual.",nuevoSueldo, diferencia);
	} else if (sueldo < 500 && antiguedad <= 10) {
		nuevoSueldo = sueldo*1.05;
		diferencia = nuevoSueldo-sueldo;
		printf("\nEl nuevo sueldo del empleado será de %.2f. Lo que supone un incremento de %.2f euros respecto a su sueldo actual.",nuevoSueldo, diferencia);
	} else if (sueldo >= 500) {
		printf("\nEl nuevo sueldo del empleado seguirá siendo el mismo, %.2f", sueldo);
	}

	getch();
	return 0;
}
