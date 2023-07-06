#include<stdio.h>
#define Max 40

struct Talumnos{
	char apellido[20];
	int nota;
};

struct Tdato{
	struct Talumnos a[Max];
	int cant;
};

struct Tdato alumnos;

void cargarRegistroAlumnos(struct Tdato *p);
int cantidadApDesap(struct Tdato p,int ap,int desap);

int main(){
	int apro=0;
	int desapro=0;
	
	cargarRegistroAlumnos(&alumnos);
	cantidadApDesap(alumnos,apro,desapro);
	return 0;		
}

void cargarRegistroAlumnos(struct Tdato *p){
	int i;
	printf("Ingrese la cantidad de alumnos: ");
	scanf("%d",&p->cant);
	
		for(i=1;i<=p->cant;i++){
			printf("Ingrese el apellido:");
			scanf("%s",&(p->a[i]).apellido);
			
			printf("Ingrese la nota del alumno:");
			scanf("%s",&(p->a[i]).nota);
		}		
}

int cantidadApDesap(struct Tdato p, int ap, int desap){
	int i=1;
	
	while(i<=p.cant){
		
		if((p.a[i]).nota>=5){
			ap = ap + 1;
		} 
		if((p.a[i]).nota<5){
			desap = desap + 1; 
		}
    	i++;   	
	}
	printf("Alumnos aprobados: %d\n",ap);
	printf("Alumnos desaprobados: %d",desap);
}

