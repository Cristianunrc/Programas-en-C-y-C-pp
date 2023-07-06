#include <stdio.h>
#define M 250

struct data{
	int cant;
	int a[M];
	
};
struct data misNotas;

void cargarNotas(struct data* notas);

int main(){
	
	cargarNotas(&misNotas);
	
return 0;
}

void cargarNotas(struct data* notas){
	int i;
	printf("Ingresar una cantidad de notas:");
	scanf("%d",&notas->cant);
	
	for(i=1;i<=notas->cant;i++){
	     printf("Ingresar la nota º%d:",i);
	     scanf("%d",&notas->a[i]);
	}
	printf("Las notas ingresadas son: %d",notas->cant);	
}


