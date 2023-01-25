#include<stdio.h>
#include<conio.h>

int main ()
{
	float nota1, nota2, nota3, promedio;
	
	printf("Introduce la primera nota del alumno: ");
	scanf("%f",&nota1);
	printf("Introduce la segunda nota del alumno: ");
	scanf("%f",&nota2);
	printf("Introduce la tercera nota del alumno: ");
	scanf("%f",&nota3);
	
	promedio = (nota1+nota2+nota3)/3;
	
	if (promedio>=7.00)
	{
		printf("El alumno esta promocionado. \nSu nota promedia es de: %.2f", promedio);
	} else {
		printf("El alumno no esta promocionado. \nSu nota promedia es de: %.2f", promedio);
	}
	
	getch();
	return 0;
}
