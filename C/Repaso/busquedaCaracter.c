// Buscar un caracter en un arreglo de caracteres que se pide como entrada. Indicas la/s posicion/es donde se encontro el elemento

#include <stdio.h>
#define N 30


typedef struct{
	char a[N]; // arreglo de caracteres
	int cant; // tamaño del arreglo
}TData;

TData vector; 

void cargarCaracteres(TData * p);
void busqueda(TData p,int * find); // parametro entero find es parametro formal de variable encontro.

int main(){
	int encontro=0;
	cargarCaracteres(&vector);
	busqueda(vector,&encontro);
		if(encontro==0){
			printf("No se encontro el elemento buscado!.");
		}
	return 0;
}

void cargarCaracteres(TData * p){
	int i; // variable de control del for
		printf("Indique la cantidad de caracteres que desea ingresar: ");
		scanf("%d",&p->cant);
		for(i=0; i<p->cant; i++){
			printf("Caracter %d: ",i+1);
			scanf(" %c",&p->a[i]);
		}
}

void busqueda(TData p,int * find){
	char letra; // variable de entrada
		if(p.cant<1){
			printf("El arreglo esta vacio!\n");
		}
		else{
			printf("Ingresar un caracter, para ver en que posicion se encuentra: ");
			scanf(" %c",&letra);
			int i=0;
			while(i<p.cant){
				if(letra==p.a[i]){ // en la comparacion de dos caracteres se usa ==
					*find=1;
					printf("Posicion %d\n",i+1); // posicion i donde se encontro la letra ingresada
				}
				i++;
			}
		}
}
