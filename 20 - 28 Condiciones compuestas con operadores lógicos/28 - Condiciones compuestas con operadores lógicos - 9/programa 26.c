#include<stdio.h>
#include<conio.h>
#include <wchar.h>
#include <locale.h> 

/* ENUNCIADO
Escribir un programa en el cual: dada una lista de tres valores numéricos distintos se calcule e informe
su rango de variación (debe mostrar el mayor y el menor de ellos)
*/

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes

	int num1, num2, num3, rango, valorSup, valorInf;
	printf("Ingrese el primer valor: ");
	scanf("%i",&num1);
	printf("Ingrese el segundo valor: ");
	scanf("%i",&num2);
	printf("Ingrese el tercer valor: ");
	scanf("%i",&num3);
	
	if (num1 > num3 && num3 > num2) { //1er y 2nd
		valorSup=num1;
		valorInf=num2;
		rango=valorSup-valorInf;
	} else if (num1 > num2 && num2 > num3) { //1er y 3er
		valorSup=num1;
		valorInf=num3;
		rango=valorSup-valorInf;
	} else if (num2 > num3 && num3 > num1) { //2nd y 1er
		valorSup=num2;
		valorInf=num1;
		rango=valorSup-valorInf;
	} else if (num2 > num1 && num1 > num3) { //2nd y 3er
		valorSup=num2;
		valorInf=num3;
		rango=valorSup-valorInf;
	} else if (num3 > num2 && num2 > num1) { //3nd y 1er
		valorSup=num3;
		valorInf=num1;
		rango=valorSup-valorInf;
	} else if (num3 > num1 && num1 > num2) { //3nd y 2nd
		valorSup=num3;
		valorInf=num2;
		rango=valorSup-valorInf;
	} else {
		printf("\nAlgunos valores son idénticos, reiniciando el programa...\n\n");
		main();
	}
	
	printf("\nEl valor superior es %i, el valor inferior es %i.",valorSup,valorInf);
	printf("\nEl rango de variación es de %i.",rango);
	
	getch();
	return 0;
}
