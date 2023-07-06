/* 
	Programa que realiza una lista en un boliche, aquellas personas con edad menor a 18 años, se debe informar el nombre y apellido.

*/

#include<stdio.h>
#define Max 50 //defino el arreglo en un maximo de 50

struct dato{	// registro conteniendo campo apellido, nombre, edad
		char apellido [20];
		char nombre [21];
		int edad;		
};

struct registro{	//registo de arreglo con campo a(arreglo) y cant(cantidad de elementos cargados)
	struct dato a[Max];
	int cant;
};

struct registro cristian;

void cargarPersonas(struct registro *p);
void mostrar(struct registro q);

int main(){
	
	cargarPersonas(&cristian);
	mostrar(cristian);

	return 0;
}

void cargarPersonas(struct registro *p){
	int i;
	
	printf("Cuantas personas ingresaron al boliche: ");
	scanf("%d",&p->cant);
	
		for(i=0; i<p->cant; i++){
			printf("Ingrese la edad de la persona %d: ",i+1);
			scanf("%d",&(p->a[i]).edad);
			
			printf("Ingrese el nombre de la persona %d: ",i+1);
			scanf("%s",&(p->a[i]).nombre);
			
			printf("Ingrese el apellido de la persona %d: ",i+1);			
			scanf("%s",&(p->a[i]).apellido);
		}		
}

void mostrar(struct registro p){
	int i=0;
	
	while(i<p.cant){
			if(p.a[i].edad < 18){	
				printf("Nombre: %s y Apellido: %s",p.a[i].nombre,p.a[i].apellido);
			}
			i++;	
	}
}
