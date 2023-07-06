#include <stdio.h>

int cant, num, fact, i, j;

int main (){
	printf("Indique la cantidad de numeros que desea obtener su factorial: ");
	scanf("%d",&cant);
	
	for (i=1; i<=cant; i++){
		printf("Ingrese el numero: ");
		scanf("%d",&num);
		fact = 1;
		for (j=1; j<=num; j++){
			fact = fact * j;
		}
		printf ("El factorial de %d es %d\n",num,fact);
	}
}
