/*
programa: Leer N numeros y organizarlos de mayor a menor con tres funcines 
y un arreglo
fecha: 12/09/2018
Creador: Daniel Andres Clavijo Giraldo 
*/
#include <conio.h>
#include <stdio.h>


//Funcion para leer los N numeros
void capturar(int val1[], int num){
	printf("Ingresar los numeros a organizar: \n");
	for(int i=0;i<num;i++){
		scanf("%d", &val1[i]);
	}
}
//Arreglo
void mayor(int val1[], int num){
	int tmp;
	for(int i=0;i<num;i++){
		for(int x=0;x<num-1;x++){
			if(val1[x]<val1[x+1]){
				tmp = val1[x];
				val1[x] = val1[x+1];
				val1[x+1] = tmp;  
			}	     	
		}
	} 	 
}
//Funcion para imprimir los numeros ordenados
void result(int val1[], int num){
	printf("Numeros de mayor a menor: \n");
	for(int i=0;i<num;i++){
		printf("%d\n", val1[i]);
	}
}
//Funcion principal
int main() {
	int n[100];
	int nmro;
	printf("Ingrese cuantos numeros va a ingresar: ");
	scanf("%d", &nmro);
	capturar(n, nmro);
	mayor(n, nmro);
	result(n, nmro);
	
	return 0;
}
