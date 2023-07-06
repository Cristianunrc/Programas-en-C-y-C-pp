//Programa que calcula la sumatoria de un numero utilizando una accion.

#include <stdio.h>

int numero;
int Sumatoria(int nro);

int main(){
	printf("Ingrese un numero mayor o igual a cero:");
	scanf("%d",&numero);
	
	Sumatoria(numero);
	
	printf("La sumatoria del numero ingresado es: %d",Sumatoria(numero));	
	return 0;	
}

int Sumatoria(int nro){
	int result;
	
	if (nro==0){
		result=0;
	}
	else{
		if(nro==1){
			result=1;
		}
		else{ // numero mayor a 1
			result=nro + Sumatoria(nro - 1);
		}
	}
}


