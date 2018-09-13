/*
Programa: Identificar la cantidad de vocales de un nombre
Fecha:08/09/2018
Creador: Daniel Andres Clavijo Giraldo
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
char CantVocales(char cv[1000])
{
	int cantidad;
	cantidad = strlen(cv);
	printf("El nombre tiene %d vocales\n", cantidad);
	return cantidad;
}
int main()
{
	char cadena[1000];
	printf("Ingrese un nombre \n");
	gets(cadena);
	CantVocales(cadena);
	getch();
	return 0;
}
