/* ENUNCIADO
Definir un vector de 5 componentes de tipo float que representen las alturas de 5 personas.
Obtener el promedio de las mismas. Contar cuántas personas son más altas que el promedio y cuántas más bajas.
*/

//Author: fraruigra || Github: https://github.com/fraruigra || Email: fraruigra@outlook.com

#include<stdio.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h> 

int main ()
{
	setlocale(LC_ALL, ""); //Impresión de tildes
	
	int f,mayorQuePromedio=0,menorQuePromedio=0;
	float altura[5],suma,promedio;
	
	for (f=1;f<=5;f++){
		printf("Introduce la altura de la %iº persona: ",f);
		scanf("%f",&altura[f]);
		suma=suma+altura[f];
	}
	promedio=suma/5;
	
	printf("\n\nEl promedio de la altura es de: %.2f\n\n",promedio);
	
	for (f=1;f<=5;f++){
		if (altura[f]>promedio){
			printf("La altura de la %iº persona (%.2f) es superior al promedio.\n",f,altura[f]);
			mayorQuePromedio++;
		} else if (altura[f]<promedio){
			printf("La altura de la %iº persona (%.2f) es inferior al promedio.\n",f,altura[f]);
			menorQuePromedio++;
		}
	}
	
	printf("\nHay un total de %i personas cuya altura es superior al promedio",mayorQuePromedio);
	printf("\nHay un total de %i personas cuya altura es inferior al promedio",menorQuePromedio);

	getch();
	return 0;
}
