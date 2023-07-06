#include<stdio.h>

int num, fact;

int factorial (int n);

int main (){
	
	printf("Ingrese un numero para calcular su factorial: ");
	scanf("%d",&num);
	
	fact = factorial (num);
	
	printf("El factorial de %d es %d.",num,fact);
	
	return (0);
}

int factorial (int n){
	if (n == 0 || n == 1){
		return (1);
	}
	else{
		return (n * factorial(n - 1));
	}
}
