// calcular el mcd (maximo comun divisor) de dos numeros

#include <stdio.h>

int num1,num2;

int mcd(int n1, int n2);

int main(){
	printf("Programa que realiza el mcd de 2 numeros \n");
	printf("Ingrese un numero:");
	scanf("%d",&num1);
	printf("Ingrese otro numero menor o igual al anterior:");
	scanf("%d",&num2);
		mcd(num1,num2);
	printf("El maximo comun divisor entre ambos numeros es:%d",mcd(num1,num2));
}

int mcd(int n1, int n2){
	if(n2==0){
		return(n1);
	}
	else{
		return(mcd(n2, n1 % n2));
	}
}
