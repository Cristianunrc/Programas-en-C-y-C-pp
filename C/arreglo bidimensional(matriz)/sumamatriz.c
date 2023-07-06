#include<stdio.h>
#define Fila 4
#define Columna 4

typedef struct{
	int a[Fila][Columna];
	int cantFil, cantCol;
}TData;

TData matriz;

void Cargar(TData *p);// cargar todos los elementos (numeros) en la matriz.
void MostrarSuma(TData q);// muestra la suma de los elementos de la matriz. 

int main(){
	Cargar(&matriz);
	MostrarSuma(matriz);
	return 0;			
}

void Cargar(TData *p){
	printf("Ingrese la cantidad de filas:");
	scanf("%d",&p->cantFil);
	printf("Ingrese la cantidad de columnas:");
	scanf("%d",&p->cantCol);
	int i=0;
	while(i<p->cantFil){
			int j=0;
			while(j<p->cantCol){
				printf("Ingrese el numero de la celda [%d , %d]:",i+1,j+1);
				scanf("%d",&p->a[i][j]);
			j++;	
			}
	i++;		
	}	
}

void MostrarSuma(TData q){
	int n=0;// variable para almacenar la suma de los elementos de la matriz.
	int i=0;
	while(i<q.cantFil){
		int j=0;
		while(j<q.cantCol){
			n = n + q.a[i][j];	
			j++;				
		}
	i++;	
	}
	printf("La suma de todos los numeros de la matriz es: %d",n);
}







