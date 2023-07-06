// calcular el factorial de un numero

#include <stdio.h>

int m;
int factorial(int n);

int main(){
	printf("Ingrese un numero mayor o igual a cero:");
	scanf("%d",&m);
	factorial(m);
	printf("El factorial del numero ingresado es:%d",factorial(m));	
}

int factorial(int n){

	if(n==0){
		return (1);
	}
	else{
		return (n * factorial (n-1));
	}
}
