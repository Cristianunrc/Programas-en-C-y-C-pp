#include <stdio.h>
#define N 31

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
		printf("Dia %d la temperatura es: %d \n",i,TTemp[i]);
		i++;
	}
}
