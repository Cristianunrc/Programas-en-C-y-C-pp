#include <stdio.h>
#include <math.h>
# define MAX 10

typedef struct{
	int arr[MAX]; // arreglo unidimensional (vector) de enteros
	int cant;
}Datos;

Datos vector;

void ingresar_num (Datos *vec);
void operacion (Datos *vec);
void mostrar (Datos vec);

int main (){
	
	ingresar_num (&vector);
	operacion (&vector);
	mostrar (vector);
	
	return 0;
}


void ingresar_num (Datos *vec){ // Desarrollo de accion ingresar_num
	int i;
	
	printf("Indicar la cantidad de numeros a ingresar:  ");
	scanf(" %d",&vec->cant);
	
	for(i = 0; i < vec->cant; i++){
		printf("Ingresar el numero %d:  ",i + 1);
		scanf(" %d",&vec->arr[i]);
	}
}

void operacion (Datos *vec){ // Desarrollo de accion operacion
	int j;
	
	for(j = 0; j < vec->cant; j++){
			vec->arr[j] = (vec->arr[j] * 2);   
	}
}

void mostrar (Datos vec){ // Desarrollo de accion mostrar
	int k;
	for (k = 0; k < vec.cant; k++){
		printf(" %d\n", vec.arr[k]);
	}
}
