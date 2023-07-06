#include <stdio.h>
#define N 12

typedef struct{
	int a[N];
	int cant;
}TData;

TData ventas;
int n;

void cargar(TData* k);
int ventasFuncion(TData q);

int main(){
	cargar(&ventas);
	n = ventasFuncion(ventas);
	printf("El total de las ventas es $%d.",n);
	return 0;
}

void cargar (TData* k) {
	int i;
	printf("Ingrese la cantidad de ventas: ");
	scanf("%d",&k->cant);
	for(i=0;i<k->cant;i++){
		printf("Ingrese la venta numero %d: ",i+1);
		scanf("%d",&k->a[i]);
	}
}

int ventasFuncion(TData q){
	int i; // variable de control
	int j=0; // variable que almacena la suma de las ventas
	for(i=0;i<q.cant;i++){
		j= j + q.a[i];
	}
	return (j);
}
