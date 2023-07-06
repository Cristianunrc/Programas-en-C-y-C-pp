#include <stdio.h>
#include <string.h>
#define N 150

struct data{
	int cant;
	int a[N]; 	
};

int main(){
	struct data datos;
	int i;
 	i=0;
 	printf("Ingrese cantidad de elementos: ");
 	scanf("%d",&datos.cant);
 	printf("Ingrese %d numeros\n",datos.cant);
 	while(i<datos.cant){
 		scanf("%d",&datos.a[i]);
		i++;
 	}
 	while(i>0){
 		printf("elemento en la posicion %d es %d\n", i,datos.a[i-1]);
 		i--;
 	}
return 0;
}
