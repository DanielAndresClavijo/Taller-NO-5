/*
Programa: Recibir dos numeros y multiplicarlos entre si
Fecha:08/09/2018
Creador: Daniel Andres Clavijo Giraldo
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
float mult(float num1, float num2)
{
	float x;
	x=num1*num2;
	printf("El resultado es %.0f", x);
	return x;
}
int main()
{
	float numero1, numero2;
	printf("Ingrese dos numeros\n");
	scanf("%f", &numero1);
	scanf("%f", &numero2);
	mult(numero1, numero2);
	getch();
	return 0;
}
