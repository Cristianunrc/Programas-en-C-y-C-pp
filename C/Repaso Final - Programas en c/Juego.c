#include <stdio.h>

int num;
char pal;

int main(){
	
	do{
		printf ("Ingrese un numero: ");
		scanf ("%d",&num);
		num++;
		printf ("El numero es %d. TE GANE.\nDesea jugar otra vez, S (si) o N (no): ");
		scanf (" %c",&pal);
	}while (pal != 'N');
	
	printf("Juego finalizado.");
	return 0;
}
