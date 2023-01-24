#include<stdio.h>
#include<conio.h>

int main ()
{
	int num1, num2;
	
	printf("Por favor introduzca el primer valor: ");
	scanf("%i",&num1);
	
	printf("Por favor introduzca el segundo valor: ");
	scanf("%i",&num2);

	if (num1 > num2){
		printf("El primer valor, %i, es mayor que el segundo valor, %i.",num1,num2);
	} else if (num1 < num2) {
		printf("El segundo valor, %i, es mayor que el primer valor, %i.",num2,num1);
	} else {
		printf("Ambos valores son identicos.");
	}
	
	getch();
	return 0;
}
