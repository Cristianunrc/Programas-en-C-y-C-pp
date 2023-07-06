// Sumatoria de los n primeros numeros. 

#include<stdio.h>

int cotaSup; // variable que ingreso por entrada
int i; // variable de control del for
int contador; // variable que almacena la suma de los numeros

int main(){
	printf("Ingrese el numero hasta donde se quiere hacer la sumatoria: ");
	scanf("%d",&cotaSup);
	contador=0;
	
	for(i=1;i<=cotaSup;i++){
		contador=contador+i;		
	}
	
	printf("La suma de los %d primeros numeros es: %d",cotaSup,contador);
	return (0);
}
