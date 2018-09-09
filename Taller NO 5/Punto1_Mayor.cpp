/*
Programa: Recibir tres numeros e imprimir el numero mayor
Fecha:08/09/2018
Creador: Daniel Andres Clavijo Giraldo
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int mayor(int uno, int dos, int tres)
{
	int may;
	if (uno>dos && uno>tres)
	{
		may = uno;
	}
	if (dos>uno && dos>tres)
	{
		may = dos;
	}
	if (tres>uno && tres>dos)
	{
		may = tres;
	}
	return may;
}
int main()
{
	int numero1, numero2, numero3;
	printf("Ingrese tres numeros enteros\n");
	scanf("%i", &numero1);
	scanf("%i", &numero2);
	scanf("%i", &numero3);
	printf("El numero mayor es %i", mayor(numero1, numero2, numero3));
	getch();
}
