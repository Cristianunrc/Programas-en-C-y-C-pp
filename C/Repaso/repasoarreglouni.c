// Se desea almacenar en un arreglo de caracteres 5 elementos. Copiar en otro arreglo los elementos en orden 
// inverso y luego mostrarlos.

#include<stdio.h>
#define Max 5

typedef struct{
	char a[Max]; // arreglo de caracteres
	int cant;
}TData;

TData vector;

void cargarCaracteres(TData * q);
void copiarOrdenInverso(TData q, TData * p);
void mostrarNuevoArreglo(TData p);

int main(){
	cargarCaracteres(&vector);
	copiarOrdenInverso(vector,&vector);
	mostrarNuevoArreglo(vector);
	return 0;
}

void cargarCaracteres(TData * q){
	int i; // variable control del for
	for(i=1; i<=Max; i++){
		printf("Inserte el caracter %d\n",i);
		scanf(" %c",&q->a[i]);
	}
}

void copiarOrdenInverso(TData q, TData * p){ // p es un nuevo arreglo que declaro como parametro de la accion
	int i=1,j=Max; // variables control del while
	while(i<=Max){
		p->a[j] = q.a[i];
		i++;
		j--;
	}
	p->cant = Max; // al nuevo arreglo p le asigno la cantidad de Max
}

void mostrarNuevoArreglo(TData p){
	int i; // variable control del for
	printf("Caracteres en orden inverso.\n");
	for(i=1; i<=p.cant; i++){
		printf("%c ",p.a[i]);
	}
}
