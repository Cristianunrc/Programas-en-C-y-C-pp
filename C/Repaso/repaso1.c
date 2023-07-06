// Crea un arreglo unidimensional donde le indiques el tamaño y crear una funcion que rellene el arreglo
// con los multiplos de un numero ingresado por entrada. Muestra los valores cargados (utilizando otra funcion)
#include<stdio.h>
#define Max 30

typedef struct{
	int a[Max]; // arreglo de enteros
	int cant; // tamaño del arreglo
}TData;

TData vector;
int show,numero;

int multiplo(int num, int i);
void cargarConFuncion(TData * p,int num);
void mostrarMultiplos(TData p);

int main(){
	printf("Ingrese un numero, se cargaran en el arreglo los multiplos del numero ingresado: ");
	scanf("%d",&numero);
	cargarConFuncion(&vector,numero);
	mostrarMultiplos(vector);
	return 0;
}

int multiplo(int num, int i){
	return(num * i);
}

void cargarConFuncion(TData * p,int num){
	int i; // variable de control del for
	printf("Indicar la cantidad de valores que quiere que se ingresen: ");
	scanf("%d",&p->cant);
		for(i=0; i<p->cant; i++){
			p->a[i] = multiplo(num,i);
		}
}
void mostrarMultiplos(TData p){
	int i; // variable de control del for
		for(i=0; i<p.cant; i++){
			printf("%d\n");	
		}
}
