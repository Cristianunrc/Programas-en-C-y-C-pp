// Realizar una carga en un arreglo con numeros enteros y un tamaño. Luego mostrar el arreglo con
// los numeros que no se repiten
#include<stdio.h>
#define Max 30

typedef struct{
	int a[Max]; // arreglo de numeros enteros
	int cant; // variable que define el tamaño del arreglo
}TData;

TData vector;

void cargarNumeros(TData * p);
void mostrarNoRepetidos(TData p);
int main(){
	cargarNumeros(&vector);
	mostrarNoRepetidos(vector);
	return 0;
}

void cargarNumeros(TData *p){
	int i;
	printf("Indique la cantidad de numeros que desea ingresar: ");
	scanf("%d",&p->cant);
		for(i=0;i<p->cant;i++){
			printf("Numero %d: ",i+1);
			scanf("%d",&p->a[i]);
		}
}

void mostrarNoRepetidos(TData p){
	int i,j,repetido;
		if(p.cant<1){
			printf("El arreglo esta vacio!!");
		}
		else{
			printf("Se muestran numeros no repetidos.\n");
			i=0; // inicialzo la variable de control del while
			while(i<p.cant){
				repetido=0; // inicializo repetido en 0 cada vez que se ejecuta el ciclo while
				if(i>0){
					for(j=0;j<i;j++){
						if(p.a[j]==p.a[i]){
							repetido=1;
						}
					}
					if(repetido==0){
						printf(" %d ",p.a[i]);
						i++;
					}
					else{
						i++;
					}
				}
				else{
					printf(" %d ",p.a[i]);
					i++;
				}
			}
		}
}
