/*
 	ejercicio 2.a) practica 10, recursividad
*/

#include <stdio.h>

struct Telemento{
		int info;
		struct Telemento* next;
};

struct Telemento Lista;
int LongElem(struct Telemento* p);

int main(){
	int cantidadElem;	
	cantidadElem= LongElem(&Lista);
	
	printf("La cantidad de nodos es:%d",cantidadElem);
	return 0;
}

int LongElem(struct Telemento* p){
	int n;
	n=1;
	printf("Ingrese un numero de nodos:");
	scanf("%d",&p);
	
	if (p=NULL){
		return 0;
	}
	else{ // p distinto a vacio
		return (n + LongElem(p->next));
	}
}
