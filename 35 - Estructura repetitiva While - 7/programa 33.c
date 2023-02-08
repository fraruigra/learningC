/* ENUNCIADO
En una empresa trabajan n empleados cuyos sueldos oscilan entre $100 y $500, realizar un programa 
que lea los sueldos que cobra cada empleado e informe cuántos empleados cobran entre $100 y $300 y 
cuántos cobran más de $300. Además el programa deberá informar el importe que gasta 
la empresa en sueldos al personal.
*/

//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com


#include<stdio.h>
#include<conio.h>
#include <wchar.h>
#include <locale.h> 

#define SueldoMax 500.00
#define SueldoMin 100.00

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes

	int i=1, n, empleado_superior, empleado_medio;
	float sueldo, total_sueldos;
	
	printf("¿Cuántos empleados tiene la empresa? ");
	scanf("%i",&n);
	printf("\n");
	
	while (i<=n){
		restart:
		printf("Introduce el sueldo del %iº empleado: ",i);
		scanf("%f",&sueldo);
		
		total_sueldos = total_sueldos + sueldo;

		if (sueldo < SueldoMin) {
			printf("\n\nERROR, SUELDO INTRODUCIDO INFERIOR AL MÍNIMO. POR FAVOR INTRODUZCA SUELDO CORRECTO... \n\n\n");
			goto restart;
		} else if (sueldo > SueldoMax) {
			printf("\n\nERROR, SUELDO INTRODUCIDO SUPERIOR AL MÁXIMO. POR FAVOR INTRODUZCA SUELDO CORRECTO... \n\n\n");
			goto restart;
		} else if (sueldo >= SueldoMin && sueldo <= 300) {
			empleado_medio = empleado_medio + 1;
		} else if (sueldo >= 301 && sueldo <= SueldoMax) {
			empleado_superior = empleado_superior + 1;
		}
		i=i+1;
	}
	
	printf ("\nLa empresa gasta un total de %.2f dólares en los sueldos de sus empleados.",total_sueldos);
	
	getch();
	return 0;
}
