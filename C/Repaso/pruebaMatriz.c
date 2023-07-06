#include <stdio.h>
#define Fila 4
#define Columna 4

typedef struct{
	int a[Fila][Columna]; 
	int cantFil;
	int cantCol;
}TData;

TData matriz;

void cargar(TData * p );

int main(){
	cargar(&matriz);
	return 0;
}

void cargar(TData * p){
	int i,j; // variables de control del for
	printf("Indique la cantidad de FILAS\n");
	scanf("%d",&p->cantFil);
	printf("Indique la cantidad de COLUMNAS\n");
	scanf("%d",&p->cantCol);
	
	for(i=0; i<p->cantFil; i++){
		for(j=0; j<p->cantCol; j++){
			printf("Inserte un numero en la posicion [%d , %d]: ",i+1,j+1);
			scanf("%d",&p->a[i][j]);
		}
	}
}
