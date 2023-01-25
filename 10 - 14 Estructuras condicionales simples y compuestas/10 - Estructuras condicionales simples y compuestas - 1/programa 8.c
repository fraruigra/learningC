#include<stdio.h>
#include<conio.h>

int main ()
{
	float sueldo;
	printf("Introduzca el sueldo del operario:");
	scanf("%f",&sueldo);
	
	if (sueldo>3000)
	{
		printf("Esta persona debe pagar impuestos.");
	}
	
	getch();
	return 0;
}
