#include<stdio.h>
#include<conio.h>

int main ()
{
	int num1, num2, num3, num4, i, suma, producto;
	
	for (i = 1; i <= 4; i++)
	{
	printf("Por favor introduce el numero %i: ",i);
		if (i == 1)
		{
			scanf("%i",&num1);
		} else if (i == 2){
			scanf("%i",&num2);
		} else if (i == 3){
			scanf("%i",&num3);
		} else {
			scanf("%i",&num4);
		}
	}
	suma = num1+num2;
	producto = num3*num4;
	
	printf("\nEl resultado de la suma del numero 1 y 2 es: %i", suma);
	printf("\nEl resultado de producto del numero 3 y 4 es: %i", producto);

	getch();
	return 0;
}
