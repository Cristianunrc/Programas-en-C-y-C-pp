#include <stdio.h>

int main (){
	
	char nombre [30]; 
	char apellido [30];
	int edad;		

	printf ("Nombre: ");
	scanf ("%s", &nombre);		
	printf ("Su nombre es: %s\n", nombre);
	printf ("Apellido: ");
	scanf ("%s", &apellido);
	printf ("Su apellido es: %s\n", apellido);
	printf ("Edad: ");
	scanf ("%d", &edad);
	printf ("Su edad es: %d", edad);
	
	return 0;
}
