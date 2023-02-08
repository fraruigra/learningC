//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h> 

/* ENUNCIADO
Se ingresan un conjunto de n alturas de personas por teclado. Mostrar la altura promedio de las personas.
*/

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes
	
	int i, n;
	float altura, altura_sum, promedio, n_flo;
	
	printf("¿De cuántas personas se desea introducir la altura?: ");
	scanf("%i",&n);
	printf("\n");
		
	i=1;
	altura_sum = 0;
	
	while (i<=n){
		printf("Introduce la estatura del %iº: ",i);
		scanf("%f",&altura);
		altura_sum = altura_sum + altura;
		i = i + 1;
	}
	
	n_flo = n;
	promedio = altura_sum/n_flo;
	
	printf("\n\nSe ha introducido la altura de %i personas.",n);
	printf("\nEl promedio de sus alturas es de %.2f cm.",promedio);
	
	getch();
	return 0;
}
