#include <stdio.h>
#define N 150

struct data {
	int cant;
	int a [N];
};
struct data datos;

int main(){
	int i;
	i=0;
	printf("Ingrese la cantidad de numeros:");
	scanf("%d",&datos.cant);
	
	while(i<datos.cant){
		printf("Ingrese el º%d numero:",i+1);
		scanf("%d",&datos.a[i]);
	i++;
	}
		while(i>0){
     	printf("El numero ingresado en orden inverso es:%d\n",datos.a[i-1]);
    	i--;
     	}
return 0;     
}


