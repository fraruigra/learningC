/* ENUNCIADO
Mostrar el abecedario de la 'A' a la 'Z' primero en may�sculas y luego en min�sculas. 
Utilizar una variable de tipo char dentro de un for.
*/

//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h> 

int main ()
{
	setlocale(LC_ALL, ""); //Impresi�n de tildes
	
	char letra;
	
	//Abecedario en may�sculas
	printf("El abecedario espa�ol en may�sculas: \n");
	for(letra='A';letra<='Z';letra++){
		printf("%c", letra);
		if (letra == 'N') {
			printf("-�");
		}
		if (letra <= 'Y'){
			printf("-");
		}
	}
	
	//Abecedario en min�sculas
	printf("\nEl abecedario espa�ol en min�sculas: \n");
	for(letra='a';letra<='z';letra++){
		printf("%c", letra);
		if (letra == 'n') {
			printf("-�");
		}
		if (letra <= 'y'){
			printf("-");
		}
	}
	
	getch();
	return 0;
}
