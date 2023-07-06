#include <stdio.h>
#include <string.h>

#define N 250

struct data{
	int cant;
	int a[N]; 	
};

void cargarNotas(struct data * notas);


int main(){
	struct data misNotas;
	
	cargarNotas(&misNotas);
}

void cargarNotas(struct data * notas){
	int i;
 	
 	// cantidad de notas a cargar
 	printf("Ingrese cantidad de elementos: ");
  	scanf("%d",&notas->cant);
 	
 	printf("Ingrese %d números\n",notas->cant);
 	for(i=0;i<(*notas).cant;i++){
		scanf("%d",&notas->a[i]);
		
	}
 
}
