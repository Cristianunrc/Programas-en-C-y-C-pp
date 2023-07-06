/*	Queremos guardar la temperatura mínima y máxima de 5 días. Realiza un programa que de la siguiente información:
	La temperatura media de cada día
	Los días con menos temperatura ( temp <= 7)
	Se lee una temperatura por teclado y se muestran los días cuya temperatura máxima coincide con ella. si no existe ningún día se muestra un mensaje de información.
*/

#include<stdio.h>
#define Max 5

typedef struct{
	float a[Max]; // arreglo de reales
}TData;

TData vector;

void cargarTemperaturas(TData * p);
void temperaturaMedia(TData * p);
void diasMenorTemp(TData  p);
void diaTempCoincidente(TData p);

int main(){
	cargarTemperaturas(&vector);
	temperaturaMedia(&vector);
	diasMenorTemp(vector);
	diaTempCoincidente(vector);
	return 0;
}

void cargarTemperaturas(TData * p){
	int i; // variable de control del for
	for(i=0; i<Max; i++){
		printf("Indique la temperaruta del dia %d: ",i+1);
		scanf(" %f",&p->a[i]);
	}
}

void temperaturaMedia(TData * p){
	int i; // variable de control del for
	float n=0,prom; // en variable n almaceno la suma de las temperaturas y en la variable
					// prom almaceno el promedio de las temperaturas (temperatura media)
	for(i=0; i<Max; i++){
		n = n + p->a[i];
 	}
 	prom = (n/Max);
	printf("La temperatura media es de %.2f grados.\n",prom);
}

void diasMenorTemp(TData  p){
	int i;
	printf("Dia/s con temperatura/s menor o igual a 7 grados.\n");
	for(i=0; i<Max; i++){
		if(p.a[i] <= 7){
			printf("Dia %d\n",i+1);
		}
	}
}

void diaTempCoincidente(TData p){
	int i=0; // variable de control del while
	float temp; // variable de entrada
	int igual=0;
	printf("Ingrese una temperatura maxima (25 grados o mas): ");
	scanf("%f",&temp);
		while(i<Max){
			if(p.a[i]>=25 && p.a[i]==temp){
				igual=1; // cambio el valor de igual a 1
				printf("El dia %d tiene una temperatura de 25 grados o mas y coincide con la temperatura ingresada.",i+1);
			}
			i++;
		}
		if(igual==0){
			printf("No existe ningun dia con la temperaura coincidente ingresada!!");
		}
}
