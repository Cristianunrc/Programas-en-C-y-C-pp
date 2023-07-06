#include <stdio.h>
#define Max 5

float calificaciones[Max]; // arreglo
float promedio=0;
int i; // variable de control
int main(){
	
	for(i=0;i<Max;i++){
	    printf("Ingrese la calificacion %d: ",i+1);
	    scanf("%f",&calificaciones[i]);
	   
	    promedio = (promedio + calificaciones[i]);
	}
	printf("El promedio es: %.2f",promedio/5);
	
	return 0;
}
