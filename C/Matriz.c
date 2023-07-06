#include <stdio.h>
#define N 10
#define M 10

typedef struct{
	
	int a [N][M]; // matriz de N x M
	int cantN, cantM;
	
}Registro;

Registro matriz;

void cargarNumeros (Registro * mat);


int main (){
	
	cargarNumeros (&matriz);
	
	
	
	return 0;
}


void cargarNumeros (Registro * mat){
	int i, j;
	printf("Numero de filas, no mayor a 10: ");
	scanf("%d",&mat->cantN);
	printf("Numero de columnas, no mayor a 10: ");
	scanf("%d",&mat->cantM);
	
	for(i = 0; i<mat->cantN; i++){
		for(j = 0; j<mat->cantM; j++){
			printf("Ingresar numero en [%d , %d]: ", i+1, j+1);
			scanf("%d",&mat->a[N][M]);
		}
	}
}
