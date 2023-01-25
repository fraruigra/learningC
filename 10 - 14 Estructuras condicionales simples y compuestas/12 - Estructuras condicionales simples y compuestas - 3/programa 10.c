#include<stdio.h>
#include<conio.h>

int main ()
{
	int num1, num2, suma, diferencia, producto;
	float division, num1_F, num2_F;
	
	printf("Por favor introduzca el primer valor: ");
	scanf("%i",&num1);
	
	printf("Por favor introduzca el segundo valor: ");
	scanf("%i",&num2);

	if (num1 > num2){
		suma=num1+num2;
		diferencia=num1-num2;
		printf("\nEl primer valor, %i, es mayor que el segundo valor, %i.",num1,num2);
		printf("\nLa suma de ambos valores es: %i.",suma);
		printf("\nLa diferencia de %i menos %i es: %i.", num1, num2, diferencia);
	} else if (num1 < num2) {
		num1_F=num1;
		num2_F=num2;
		producto=num1*num2;
		division=num1_F/num2_F;
		printf("\nEl segundo valor, %i, es mayor que el primer valor, %i.",num2,num1);
		printf("\nEl producto de ambos valores es: %i.",producto);
		printf("\nLa division de %i entre %i es: %.2f.",num1, num2, division);
	} else {
		printf("\nAmbos valores son identicos.");
	}
	
	getch();
	return 0;
}
