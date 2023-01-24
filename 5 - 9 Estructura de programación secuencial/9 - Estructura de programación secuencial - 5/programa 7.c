#include<stdio.h>
#include<conio.h>

int main ()
{
	float precio_art, precio_abonar, cant_cli_F;
	int cant_cliente;
	
	printf("Introduzca el precio del producto: ");
	scanf("%f",&precio_art);
	
	printf("Introduzca los productos que tiene el cliente: ");
	scanf("%i",&cant_cliente);
	cant_cli_F=cant_cliente;
	
	precio_abonar = cant_cli_F * precio_art;
	
	printf("\nEl cliente ha comprado %i unidades, a %.2f euros la unidad",cant_cliente,precio_art); 
	printf("\nEl precio total de su compra es del %.2f", precio_abonar);
	
	getch();
	return 0;
}
