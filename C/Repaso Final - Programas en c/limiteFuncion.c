#include <stdio.h>
#include <math.h>

// programa que calcula el limite de una funcion f(x) cuando x tiende a c
float z, m, resultado1, resultado2;

int funcion (int x);
int funcion_limite (float x, float c, float n);


int main (){
	
	printf ("Ingrese el valor de c (limite tienen a c) = ");
	
	
	return 0;
}


int funcion (int x){
	
	return (x / (sqrt(x + 1) - 1));
}


int funcion_limite (int c, int n){
	
	return (c + ((0.1)^n), funcion (c + ((0.1)^n));
	
}

