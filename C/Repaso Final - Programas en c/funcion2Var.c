// Funcion de dos variables

#include <stdio.h>

int a,b;

int funcion (int x, int y);

int main(){
	printf("Ingrese el primer valor a: ");
	scanf("%d",&a);
	printf("Ingrese el segundo valor b: ");
	scanf("%d",&b);
	
	printf("El resultado es %d",funcion (a, b));
	
	return 0;
}


int funcion (int x, int y){
	return( 3*(x*x)+ 2*y ); // f(x,y) = 3x^2 + 2y
}
