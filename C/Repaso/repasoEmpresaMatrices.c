/* Crear un programa que lea los precios de 5 artículos y las cantidades vendidas por una empresa en sus 4 sucursales. Informar:
	Las cantidades totales de cada articulo.
	La cantidad de artículos en la sucursal 2.
	La cantidad del articulo 3 en la sucursal 1.
	La recaudación total de cada sucursal.
	La recaudación total de la empresa.
	La sucursal de mayor recaudación.
*/
#include<stdio.h>
#define N 4 // fila
#define M 4 // columna

typedef struct{
	float a[M][N]; // matriz de reales
	int b[M][N]; // matriz de enteros
}TData;

TData matriz;

void cargarMatrices(TData * p, TData * q);
void cantidadArtSucursal(TData q);
void cantidadArtSeleccionados(TData q);
void recaudacionSucursal(TData p, TData q);
void recaudacionTotal(TData p, TData q);
void sucursalMayorRecaudacion(TData p, TData q);

int main(){
	cargarMatrices(&matriz,&matriz);
	cantidadArtSucursal(matriz);
	cantidadArtSeleccionados(matriz);
	recaudacionSucursal(matriz,matriz);
	recaudacionTotal(matriz,matriz);
	sucursalMayorRecaudacion(matriz,matriz);
	return 0;
}

void cargarMatrices(TData * p, TData * q){
	int i,j; // variables de control del for
	printf("Cargar los precios de los articulos en las distintas sucursales.\n");
	for(i=0; i<N; i++){
		for(j=0; j<M; j++){
			printf("Precio del articulo %d, sucursal %d: ",i+1,j+1);
			scanf(" %f",&p->a[i][j]);
		}
	}
		printf("\nCargar las cantidades vendidas de cada articulo por cada sucursal.\n");
		for(i=0; i<N; i++){
			for(j=0; j<M; j++){
				printf("Cantidad vendida del articulo %d, sucursal %d: ",i+1,j+1);
				scanf(" %d",&q->b[i][j]);
			}
		}
}

void cantidadArtSucursal(TData q){
	int i,j; // variable de control del for
	for(i=0; i<M ; i++){
		int count = 0; // variable donde almaceno la suma de las cantidades de articulos vendidos por sucursal
		for(j=0; j<N ; j++){
			count=(count+q.b[j][i]);
		}
		printf("La cantidad de articulos vendidos por la sucursal %d es %d articulos.",i+1,count);
	}
}

void cantidadArtSeleccionados(TData q){
	int i,j;
	int contador=0; // variable donde almaceno la cantidad de articulos vendidos por la sucursal 2
	int contador1; // variable donde almaceno la cantidad de articulos que se vendio del Articulo 3, sucursal 1
	for(i=1; i<2; i++){
		for(j=0; j<M ; j++){
			contador=(contador+q.b[i][j]);
		}
	}
	printf("La cantidad de articulos vendidos por la sucursal 2 es: %d articulos\n",contador);
	
	contador1=q.b[0][2];
	printf("Cantidad de ventas del articulo 3 en la sucursal 1 es: %d\n",contador1);
}

void recaudacionSucursal(TData p, TData q){
	int i,j;
	printf("Se contabilizara la recaudacion por sucursal.\n");
	for(i=0; i<N ; i++){
		float total=0; // variable que almacena la suma de las recaudaciones
		for(j=0; j<M ; j++){
			total = (total + p.a[i][j] * q.b[i][j]);	
		}
		printf("Monto recaudado por la venta de articulos de la sucursal %d es $%.2f.",i+1,total);
	}
}

void recaudacionTotal(TData p, TData q){
	int i,j;
	float count=0; // variable donde almaceno el total de las recaudaciones
	for(i=0; i<N ; i++){
		for(j=0; j<M ; j++){
			count = (count + p.a[i][j] * q.b[i][j]);
		}
	}
	printf("Monto total recaudado por las 4 sucursales es de $%.2f.",count);
}

void sucursalMayorRecaudacion(TData p, TData q){
	int sucursal; // variablo donde almaceno el indice i. Indica la sucursal que mas recaudo
	float mayor = (p.a[0][0] * q.b[0][0] + p.a[0][1] * q.b[0][1] + p.a[0][2] * q.b[0][2] + p.a[0][3] * q.b[0][3] + p.a[0][4] * q.b[0][4]);
	// en variable mayor almaceno el total de las recaudaciones de la sucursal 1.
	int i=0; // variable de control del while
	while(i<N){
		float count=0; // variable que lleva la contabilizacion de las recaudaciones de cada sucursal
		int j=0;
		while(j<M){
			count = (count + p.a[i][j] * q.b[i][j]);
			j++;
		}
		if(count>=mayor){
			mayor=count;
			sucursal=i;
		}
	i++	
	}
		printf("La sucursal %d es la de mayor recaudacion con un total de $%.2f.",sucursal+1,mayor);
}
