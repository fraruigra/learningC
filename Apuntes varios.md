# Variables básicas

| Variable | Para qué se usa |
| ----------- | ----------- |
| int | Número enteros |
| float | Números con decimales |
| char | caracter |
| bool | booleanos |

# 1. Imprimir

> printf ("Texto a imprimir");

## 1.1. Imprimir números enteros: 

> printf ("imprime este número entero %i", i);

## 1.2. Imprimir números decimales

> printf ("Imprime este número decimal %f", f);

> printf ("Imprime este número decimal solo con 2 decimales %.2f", f);

# 2. Introducir datos

> scanf ("&i",i);

## 2.1. Introduce número entero

> scanf("&i", i);

## 2.2. Introduce número decimal

> scanf("&f", f);

# 3. if -- else if

# 4. Ciclo while o ciclo for ¿cual utilizar?

Utilizamos while de manera general, aunque el ciclo/bucle for es más sencillo de utilizar.

Utilizamos el ciclo/bucle for cuando conocemos la cantidad de veces que queremos que se ejecute un bloque de instrucciones

# 5. Definir constantes

* Hay que hacerlo antes del main
  *   >#define
  *   #define PI 3.14

---

# **CASOS Y EJERCICIOS ESPECIALES**

# 1. Cómo saber si un número es par o múltiplo de número cualquiera

* Cómo saber si es par:
    *   > i%2==0
* Cómo saber si es múltiplo de (por ejemplo) 3:
    *   > i%3=0



# 2. Reiniciar programa hasta un punto deseado (ejemplo) -- puntoElegido: **goto** puntoElegido

	while (i<=n){
		restart:
		printf("Introduce el sueldo del %iº empleado: ",i);
		scanf("%f",&sueldo);
		
		total_sueldos = total_sueldos + sueldo;

		if (sueldo < SueldoMin) {
			printf("\n\nERROR, SUELDO INTRODUCIDO INFERIOR AL MÍNIMO. POR FAVOR INTRODUZCA SUELDO CORRECTO... \n\n\n");
			goto restart;
		}
		
# 3. Los vectores 
Son como unas "cajitas", breve explicación para "moverse" por las cajitas

    int f,vector[4];
	
	for (f=1;f<=4;f++){
		printf("Introduce el %iº valor del primer vector: ",f);
		scanf("%i",&vector[f]);
		printf("%i",&vector[f]);
	}
