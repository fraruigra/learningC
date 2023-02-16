/* ENUNCIADO
En un banco se procesan datos de las cuentas corrientes de sus clientes. 
De cada cuenta corriente se conoce: número de cuenta y saldo actual. 
El ingreso de datos debe finalizar al ingresar un valor negativo en el número de cuenta.
Se pide confeccionar un programa que lea los datos de las cuentas corrientes e informe:

a)De cada cuenta: número de cuenta y estado de la cuenta según su saldo, sabiendo que:
Estado de la cuenta	'Acreedor' si el saldo es >0.
			'Deudor' si el saldo es <0.
			'Nulo' si el saldo es =0.
b) La suma total de los saldos acreedores.
*/

//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h> 

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes

	int cuentas=0, cuentaAcreedora=0, cuentaNula=0, cuentaDeudora=0, numCuenta;
	float saldoActual, saldoAcreedor=0;
	
	printf("Si desea salir por favor introduzca un número de cuenta negativo.\n\n\n");
	
	do {
		printf("Introduce el número de cuenta: ");
		scanf("%i",&numCuenta);
		
		if (numCuenta>=0){
		printf("Introduce el saldo actual: ");
		scanf("%f",&saldoActual);
		cuentas++;
				
		if (saldoActual>0){
			printf("La cuenta con número %i es una cuenta acreedora\n",numCuenta);
			saldoAcreedor = saldoAcreedor + saldoActual;
			cuentaAcreedora++;
		} else if (saldoActual==0) {
			printf("La cuenta con número %i es una cuenta nula\n",numCuenta);
			cuentaNula++;
		} else if (saldoActual<0) {
			printf("La cuenta con número %i es una cuenta deudora\n",numCuenta);
			cuentaDeudora++;
		}
		printf("\n");
		} else {
			saldoActual=0;
		}
	} while (numCuenta>0);
		
	printf("\n\nHay un total de %i cuentas en el banco.",cuentas);
	printf("\nLa suma total del saldo acreedor es de: %.2f.",saldoAcreedor);
	
	printf("\n\nDel total de %i cuentas hay diversos tipos: \n- Cuentas acreedoras: %i. \n- Cuentas nulas: %i \n- Cuentas deudoras: %i",cuentas,cuentaAcreedora,cuentaNula,cuentaDeudora);
	
	getch();
	return 0;
}
