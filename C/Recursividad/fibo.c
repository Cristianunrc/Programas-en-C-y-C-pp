// calcular el fibonacci de un numero x.

#include <stdio.h>

int m;

int fibonacci(int n);

int main(){
	printf("Ingrese un numero mayor o igual a uno:");
	scanf("%d",&m);
	fibonacci(m);
	printf("El fibonacci de %d es:%d",m,fibonacci(m));
	return 0;	
}

int fibonacci(int n){
	if(n==1 || n==2){
		return(1);
	}
	else{
		return(fibonacci(n-1)+fibonacci(n-2));
	}
}
