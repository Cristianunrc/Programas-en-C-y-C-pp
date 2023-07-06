// Programa que declare un vector de diez elementos enteros y pida números para rellenarlo hasta que se llene el vector o se introduzca un número negativo.
// Entonces se debe imprimir el vector (sólo los elementos introducidos).
#include<stdio.h>
#define Max 10

typedef struct{
	int a[Max]; // arreglo de enteros
	int cant; // tamaño del arreglo
}TData;

TData vector;
void cargarValores(TData * p );
void mostrarPositivos(TData  p);

int main (){
	cargarValores(&vector);
	mostrarPositivos(vector);
	return 0;
}

void cargarValores(TData * p ){
	int i=0; // variable de control del while
	int valor=0;
	while(i<Max && valor==0){
		printf("Inserte el numero %d: ",i+1);
		scanf(" %d",&p->a[i]);
		if(p->a[i]<0){ // valor negativo
			valor=1;
		}
		++i;
	}
	p->cant=i;
}

void mostrarPositivos(TData  p){
	int i; // variable de control del for
	printf("Valores cargados.\n");
	for(i=0; i<p.cant; ++i){
		printf("%d\n",p.a[i]);
	}
}
