/*
	Programa que informa la cantidad de alumnos aprobados y desaprobados.
*/
#include <stdio.h>
#include <string.h>
#define Max 40

typedef struct{
	char apellido[30]; // campo appellido es cadena de caracteres
	char nota[15]; // campo nota es de tipo cadena de caracteres
}TAlumnos;

typedef struct{
	TAlumnos a[Max]; // arreglo de tipo registro TAlumnos
	int cant; // tamaño del arreglo
}TData;

TData alumnos;

void cargarRegistroAlumnos(TData *p);
int cantidadApDesap(TData q);

int main(){
	cargarRegistroAlumnos(&alumnos);
	cantidadApDesap(alumnos);
	return 0;
}

void cargarRegistroAlumnos(TData *p){
	int i; // variable de control del for
	printf("Cantidad de alumnos: ");
	scanf("%d",&p->cant);
		for(i=1; i<=p->cant; i++){
			printf("Apellido del alumno %d: ",i);
			scanf("%s",&p->a[i].apellido);
			printf("El alumno fue aprobado o desaprobado, ingrese la palabra: ");
			scanf("%s",&p->a[i].nota);
		}
}

int cantidadApDesap(TData q){
	int i=1; // variable de control del while
	int ap=0;
	int desap=0;
	
	while(i<=q.cant){
		
		if(strcmp(q.a[i].nota,"aprobado")==0){
				ap=ap+1;
    	}else{
				desap=desap+1; 
		}
		i++;		
	}
	printf("Alumnos aprobados: %d\n",ap);
	printf("Alumnos desaprobados: %d",desap);
}

