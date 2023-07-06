#include <stdio.h>
#include <string.h>
#define Max 20
struct empleado{
	char nombre[100];
	char telefono[100];
	char direccion[100];
	int edad;
};
struct data{
	int cant;
	struct empleado a[Max]; 	
};
int main(){
  struct data datosEmpleados;
  int i;
  datosEmpleados.cant=15;
  for (i=0; i<datosEmpleados.cant; i++){ 
    printf("Ingrese nombre: \n ");
    scanf("%s",datosEmpleados.a[i].nombre);
    printf("Ingrese tel:\n ");
    scanf("%s",datosEmpleados.a[i].telefono);
    printf("Ingrese dir:\n ");     
    scanf("%s",datosEmpleados.a[i].direccion);
    printf("Ingrese edad:\n "); 
    scanf("%d",&(datosEmpleados.a[i].edad));
  }
  for (i=0; i<datosEmpleados.cant; i++){ 
    printf("Nombre del empleado: %s \n",datosEmpleados.a[i].nombre);
    printf("Edad del empleado: %d \n",datosEmpleados.a[i].edad);
  }
return 0;
}
