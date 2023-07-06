// Programa que realiza una operacion dadas dos entradas o argumentos
#include <stdio.h>
#include <math.h>

int p, q; 
float z;

float op (int x, int y);

int main (){
	printf ("Ingrese el primer argumento: ");
	scanf ("%d",&p);
	printf ("Ingrese el segundo argumento: ");
	scanf ("%d",&q);
	
	z = op (p, q);
	
	printf("El valor de la funcion es %f",z);
	return 0;
}

float op (int x, int y){
	
	return (x + sqrt(x) - 2*y - sqrt(y));
	
}
