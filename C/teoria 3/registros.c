#include <stdio.h><string.h>
typedef struct {
	            char nombre[17]; //16 mas el caracter nulo o de fin de cadena '\0'
                  char telefono[21];  //20 mas el caracter nulo o de fin de cadena '\0'
                  char direccion[41]; //40 mas el caracter nulo o de fin de cadena '\0'
                  int edad;
                }TEmpleado;

TEmpleado emp1;

int main(){
  printf("\n Ingrese Nombre: "); 
  fgets(emp1.nombre,17,stdin);
  printf("\n Ingrese Telefono: ");
  fgets(emp1.telefono,21,stdin);
  printf("\n Ingrese Direccion: ");
  fgets(emp1.direccion,41,stdin);
  printf("\n Ingrese Edad: ");
  scanf("%d",&emp1.edad);
  printf("\n Los datos personales del empleado son: \n");
  printf("\n Nombre: %s \n", emp1.nombre);
  printf("\n Telefono: %s \n", emp1.telefono);
  printf("\n Direccion: %s \n", emp1.direccion);
  printf("\n Edad: %d \n", emp1.edad);
  return 0;
}
