/* 
	Programa que calcula la suma de los elementos(numeros enteros) contenidos en el arreglo, mediante recursividad.
*/
#include<stdio.h>
#define Max 30
typedef struct{
	int cant;
	int a[Max];
}TData;

TData arreglo;

void CargarNumeros(TData* p);
int Suma(TData q);

int main(){
	CargarNumeros(&arreglo);
	Suma(arreglo);
return 0;	
}

void CargarNumeros(TData* p){
	int i;
	printf("Ingrese una cantidad de numeros a cargar:");
	scanf("%d",&p->cant);
	for(i=1;i<=p->cant;i++){
		printf("Ingrese el %dº numero:");
		scanf("%d",&p->a[i]);
	}
}

int Suma(TData q){
	int n,i;
	if(q.cant<1){
		printf("La cantidad de numeros es menor a 1");
	}
	else{ // la cantidad es mayor o igual a 1(q.cant>=1)
		n=0;
		n=n+q.a[i];
		Suma(a,i+1,n);
	}
}	
