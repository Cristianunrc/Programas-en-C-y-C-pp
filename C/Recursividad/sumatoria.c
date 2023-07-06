//Programa que calcula la sumatoria de un numero mediante una funcion.

#include<stdio.h>

int Sumatoria(int num);

int main(){
	int numero;
	
	printf("Ingrese un numero mayor o igual a cero:");
	scanf("%d",&numero);
	
	printf("La sumatoria del numero ingresado es %d",Sumatoria(numero));
}

int Sumatoria (int num){
	if (num==0){
		return (0);
	}
	else{ // numero mayor a cero.
		return (num + Sumatoria(num-1));
	}
}

