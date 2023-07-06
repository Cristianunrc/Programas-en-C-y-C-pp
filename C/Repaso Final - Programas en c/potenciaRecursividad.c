#include <stdio.h>

int base, pot, result;

int potencia (int b, int p);

int main(){
	printf ("Ingresar el numero de la base: ");
	scanf ("%d",&base);
	printf("Ingesar el numero de la potencia: ");
	scanf("%d",&pot);
	
	result = potencia (base, pot);
	
	printf ("El resultado es: %d",result);
	
	return 0;
}

int potencia (int b, int p){
	
	if (b != 0 && p == 0){
		return 1;
	}
	else{
		if (p == 1){
			return b;
		}
		else{
			return ( b * potencia (b, p-1));
		}
	} 
}
