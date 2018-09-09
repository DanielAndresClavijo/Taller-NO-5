/*
Programa: Convertir segundos en h/min/s
Fecha:08/09/2018
Creador: Daniel Andres Clavijo Giraldo
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
void tiempo(int segtotal)
{
	int hora=0, min=0, seg=0, sgt = segtotal;
	if(segtotal%3600==0)
	{
		hora=segtotal/3600;
	}else
	{
		hora=segtotal/3600;
		segtotal=segtotal%3600;
		if(segtotal%60==0)
		{
			min=segtotal/60;
		}else
		{
			min=segtotal/60;
			segtotal=segtotal%60;
			seg=segtotal;
		}
	}
	printf("%d segundos equivalen a  %dh - %dmin - %ds",sgt, hora, min, seg);
}
int main()
{
	int st;
	printf("Ingrese los segundos que desea convertir a h/min/s\n");
	scanf("%d",&st);
	tiempo(st);
	getch();
	return 0;	
}
