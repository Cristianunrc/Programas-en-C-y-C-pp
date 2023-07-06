// Observacion de valores al pasar parametros de tipo dato o resultado.

#include <stdio.h>

int a = 2, b = 3;

void pasaje (int i, int *j); // int i por dato, int *j por resultado

int main () {
	
	pasaje (a, &b);
	
	printf("\nValor de a = %d , valor de b = %d",a,b);
	
	return (0);
}

void pasaje (int i, int *j){
	
	i = i + 10;
	*j = *j + 10;
	
	printf("Valor de i = %d , valor de j = %d",i,*j);
}
 


