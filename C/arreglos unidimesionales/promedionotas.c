// Almacenar notas, calcular su promedio e informarlo.
#include <stdio.h>
#define N 10

typedef struct{
	int a[N];
	int cant;
}Tdata;

Tdata notas;
float prom;

void cargarNotas(Tdata *p);
float promedio(Tdata p);

int main(){
	cargarNotas(&notas);
    prom = promedio(notas);
    printf("El promedio de las notas es %.2f",prom);
	return 0;
}
	
void cargarNotas(Tdata *p){
	printf("Indique la cantidad de notas: ");
    scanf("%d",&p->cant);
    int i; 
	for (i=0;i<p->cant;i++){
		printf("Ingresar la nota %d: ",i+1);
		scanf(" %d",&p->a[i]);
	}
}

float promedio(Tdata p){
	int i; // variable de control
	float j=0; // contador
	
	for(i=0;i<p.cant;i++){
	    j = (j + p.a[i]);
	}
	return (j/p.cant);
}
