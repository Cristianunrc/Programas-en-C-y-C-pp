#include<stdio.h>
#define Max 5

typedef struct{
	float a[Max]; // arrelo de enteros
}TData;

TData vector;

void cargarNotas(TData * p);
void mostrarNotas(TData p);
void promMayorMenor(TData p);

int main(){
	cargarNotas(&vector);
	mostrarNotas(vector);
	promMayorMenor(vector);
	return 0;
}

void cargarNotas(TData * p){
	int i; // variable de control del for
	for(i=1; i<=Max; i++){
		printf("Inserte la nota %d\n",i);
		scanf("%f",&p->a[i]);
	}
}

void mostrarNotas(TData p){
	int j; // variable de control del for
	printf("Notas cargadas.\n");
	for(j=1; j<=Max; j++){
		printf("%.2f\n",p.a[j]);
	}
}

void promMayorMenor(TData p){
	int mayor,menor; // variables donde almaceno la mayor y menor notas.
	float n,prom; // variable a almaceno la suma de las notas, variable prom almaceno el promedio de las notas.
	int i=1;
		n=0;
		while(i<=Max){
			n+=p.a[i];
			i++;
		}
		prom = (n/Max);
		printf("El promedio de las notas es: %.2f\n",prom);
			
			i=1;
			mayor=p.a[1];
			while(i<=Max){
				if(p.a[i]>=mayor){
					mayor=p.a[i];
				}
				i++;
			}
			printf("La mayor nota es: %.2f\n",mayor);
				
				i=1;
				menor=p.a[1];
				while(i<=Max){
					if(p.a[i]<=menor){
						menor=p.a[i];
					}
					i++;
				}
				printf("La menor nota es: %.2f",menor);
	
}


