/*
	 Programa donde informa los alumnos que estan en promocion (3 notas superior a 7).
*/
#include <stdio.h>
#include <string.h>
#define Max 30


struct Talumnos{
	char apellido[30];
	int nota1, nota2, nota3;
};

struct Tdata{
	struct Talumnos a[Max];
	int cant; 
};

struct Tdata alum;

void CargarAlumnos(struct Tdata *p);
char InformarAlumnosPromocion(struct Tdata q);

int main(){
	CargarAlumnos(&alum);
	InformarAlumnosPromocion(alum);
	return 0;
}

void CargarAlumnos(struct Tdata *p){
	int i;
	printf("Ingrese una cantidad de alumnos:");
	scanf("%d",&p->cant);
	for(i=1;i<=p->cant;i++){
		printf("Ingrese el apellido del º%d alumno:",i);
		scanf("%s",&p->a[i].apellido);
		printf("Ingrese la primer nota:");
		scanf("%d",&p->a[i].nota1);
		printf("Ingrese la segunda nota:");
		scanf("%d",&p->a[i].nota2);
		printf("Ingrese la tercer nota:");
		scanf("%d",&p->a[i].nota3);
	}
}

char InformarAlumnosPromocion(struct Tdata q){
	int i;
	for(i=1;i<=q.cant;i++){
		if((q.a[i].nota1>=7) && (q.a[i].nota2>=7) && (q.a[i].nota3>=7)){
			printf("Alumno en promocion: %s\n",q.a[i].apellido);
		}
	}
}
