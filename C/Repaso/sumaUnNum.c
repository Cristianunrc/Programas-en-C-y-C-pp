// Se desea almacenar un arreglo con numeros enteros, luego sumarle un numero pasado como parametro a cada elemento del arreglo.
// Finalmente mostrar el arreglo actualizado.

#include<stdio.h>
#define Max 30

typedef struct{
	int a[Max]; // arreglo de enteros
	int cant; // tamaño del arreglo
}TData;

TData arr;
int num;

void cargarElementos(TData * p);
void sumaNumero(TData * p, int * n);
void mostrarActualizado(TData p);

int main(){
	printf("Ingresar un numero: ");
	scanf("%d",&num);
	cargarElementos(&arr);
	sumaNumero(&arr,&num);
	mostrarActualizado(arr);
	return 0;
}

void cargarElementos(TData * p){
	int i; // variable de control del for
	printf("Indique cuantos numeros desea ingresar: ");
	scanf("%d",&p->cant);
	for(i=1; i<=p->cant; i++){
		printf("Ingresar el numero %d: ",i);
		scanf(" %d",&p->a[i]);
	}
}

void sumaNumero(TData * p, int * n){
	int i=1; // variable de control del while
	while(i<=p->cant){
		p->a[i] = (p->a[i] + *n);
		i++;
	}
}

void mostrarActualizado(TData p){
	int i; // variable de control del for
	if(p.cant<1){
		printf("El arreglo esta vacio!!");
	}else{
		printf("Valor/es actualizado/s.\n");
		for(i=1; i<=p.cant; i++){
			printf(" %d ",p.a[i]);
		}
	}
}
