/*
Programa: determinar si un dato ingresado por el usuario es una vocal minuscula o mayuscula
Fecha:08/09/2018
Creador: Daniel Andres Clavijo Giraldo
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<iostream>
void caracter(char ca)
{
	char ah={'a'};
	char eh={'e'};
	char ih={'i'};
	char oh={'o'};
	char uh={'u'};
	char Ah={'A'};
	char Eh={'E'};
	char Ih={'I'};
	char Oh={'O'};
	char Uh={'U'};
	if (ca==ah or ca==eh or ca==ih or ca==oh or ca==uh)
	{
		printf("El caracter es una vocal minuscula");
	}else 
		if (ca==Ah or ca==Eh or ca==Ih or ca==Oh or ca==Uh)
	{
			printf("El caracter es una vocal mayuscula");
	}else
		{
			printf("******Error*****\nHa ingresado mas de un caracter o a ingresado un dato incorrecto");
		}
}
int main()
{
	char pe;
	
	printf("Ingrese un caracter\n");
	scanf("%c",&pe);
	caracter(pe);
	getch();
	return 0;
}
