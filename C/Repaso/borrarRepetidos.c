// Se desea cargar un arreglo con numeros enteros hasta 30 como maximo. Luego ingresar como parametro un numero, recorrer el arreglo y copiar 
// en otro arreglo aquellos numeros diferentes al numero ingresado como parametro. Finalmente mostrar el arreglo con los valores actualizados

#include<stdio.h>
#define Max 30

typedef struct{
	int a[Max]; // arreglo de enteros
	int cant; // tamaño del arreglo
}TData;

TData vector;
int numero;

void cargar(TData * p);
void copiarNoRepetidos(TData p, TData * q, int * num); // declaro un nuevo arreglo * q. La variable *num recibe la info de la variable numero en main.
void mostrarValores(TData q);

int main(){
	printf("Ingresar un numero: ");
	scanf("%d",&numero);
	cargar(&vector);
	copiarNoRepetidos(vector,&vector,&numero);
	mostrarValores(vector);
	return 0;
}

void cargar(TData * p){
	int i;
		printf("Indicar la cantidad de numeros que quiere ingresar, deben ser menor o igual 30: ");
		scanf("%d",&p->cant);
		for(i=0; i<p->cant; ++i){
			printf("Numero %d: ",i+1);
			scanf("%d",&p->a[i]);
		}
}

void copiarNoRepetidos(TData p, TData * q, int * num){
	int i,j;
		if(p.cant<1){
			printf("El vector esta vacio!!.");
		}
		else{
			j=0;
			for(i=0; i<p.cant; ++i){
				if(*num != p.a[i]){
					q->a[j] = p.a[i]; // en el elemento j del arreglo q almaceno el elemento i del arreglo p
					j++;
				}
			}
		}
		q->cant=j; // indico el tamaño del arreglo q	
}

void mostrarValores(TData q){
	int i;
		for(i=0; i<q.cant; ++i){
			printf(" %d ",q.a[i]);
		}
}
