//Programa que dada una palabra te la muestra en sentido inverso
#include<stdio.h>
#define MAX 100

typedef struct{
	char a [MAX]; // arreglo de caracteres (letras)
	int cant; // cantidad de elementos del arreglo, tamaño del vector
}TData;

TData mir;

void cargarLetras (TData *q);
void espejo (TData q, TData *p);
void mostrarLetras (TData p);

int main (){
	cargarLetras (&mir);
	espejo (mir, &mir);
	mostrarLetras (mir);
	return 0;
}

void cargarLetras (TData *q){
	int i;
	printf("Indique la cantidad de letras que quiere ingresar: ");
	scanf("%d",&q->cant);
	for (i=0; i<q->cant; i++){
		printf("Ingrese la letra %d: ",i+1);
		scanf(" %c",&q->a[i]);
	}
}

void espejo (TData q, TData *p){
	int i, j;
	p->cant = q.cant;
	i = p->cant;
	j = 0;
	while (i > 0){
		p->a[j] = q.a[i-1];
		j++;
		i--;
	}	
}

void mostrarLetras (TData p){
	int i;
	printf("La palabra en orden inverso es:\n");
	for (i=0; i<p.cant; i++){
		printf("%c ",p.a[i]);
	}
}

