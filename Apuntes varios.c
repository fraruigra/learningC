//int, float, printf ("%i", variable || "%.2f", variableFloat), scanf ("%f", &variable)

//if -- else if

//ciclo while o ciclo for ¿cual usar?

Utilizamos while de manera general, aunque el ciclo/bucle for es más sencillo de utilizar
Utilizamos el ciclo/bucle for cuando conocemos la cantidad de veces que queremos que se ejecute un bloque de instrucciones

//Definir constantes (Hay que hacerlo antes del main) -- #define

#define PI 3.14

//Reiniciar programa hasta un punto deseado (ejemplo) -- puntoElegido: goto puntoElegido
	while (i<=n){
		restart:
		printf("Introduce el sueldo del %iº empleado: ",i);
		scanf("%f",&sueldo);
		
		total_sueldos = total_sueldos + sueldo;

		if (sueldo < SueldoMin) {
			printf("\n\nERROR, SUELDO INTRODUCIDO INFERIOR AL MÍNIMO. POR FAVOR INTRODUZCA SUELDO CORRECTO... \n\n\n");
			goto restart;
		}
