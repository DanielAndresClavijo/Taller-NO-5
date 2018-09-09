/*
Programa: Parar ciclo al ingresar valor negativo
Fecha:08/09/2018
Creador: Daniel Andres Clavijo Giraldo
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
void ciclo()
{
	int i=0, v, e, x=1;
	while(i==0)
	{
		printf("Ingrese la cantidad de la lista %d\n", x);
		scanf("%d", &v);
		if(v!=abs(v))
		{
			printf("Error\nHa ingresado un valor negativo\nFin del programa\n");
			i=i+1;
		}else
		{
			printf("La cantidad de la lista %d es\n",x);
			for(e=1;e<v+1;e++)
			{
				printf("%d", e);
				printf("\n");
			}
		}
		x=x+1;
	}
	
}
int main()
{
	ciclo();
	return 0;
}
