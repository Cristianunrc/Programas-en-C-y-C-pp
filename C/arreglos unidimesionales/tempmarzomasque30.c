/*
	Arreglo que informa el/los dia/s con la temperatura mayor a 30º.
*/
#include <stdio.h>
#define N 10

int TTemp[N];
int i;

int main(){
	i=1;
	while (i<=N){
		printf("Ponga la temperatura del dia %d \n",i);
		scanf("%d",&TTemp[i]);
		i++;
	}
	i=1;
	while (i<=N){
		if(TTemp[i]>30){
			printf("El dia %d la temperatura fue %d \n",i,TTemp[i]);
		}
		i++;
	}
}
