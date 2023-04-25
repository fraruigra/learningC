/* ENUNCIADO
Mostrar el abecedario de la 'A' a la 'Z' primero en mayúsculas y luego en minúsculas. 
Utilizar una variable de tipo char dentro de un for.
*/

//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h> 

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes
	
	char letra;
	
	//Abecedario en mayúsculas
	printf("El abecedario español en mayúsculas: \n");
	for(letra='A';letra<='Z';letra++){
		printf("%c", letra);
		if (letra == 'N') {
			printf("-Ñ");
		}
		if (letra <= 'Y'){
			printf("-");
		}
	}
	
	//Abecedario en minúsculas
	printf("\nEl abecedario español en minúsculas: \n");
	for(letra='a';letra<='z';letra++){
		printf("%c", letra);
		if (letra == 'n') {
			printf("-ñ");
		}
		if (letra <= 'y'){
			printf("-");
		}
	}
	
	getch();
	return 0;
}
