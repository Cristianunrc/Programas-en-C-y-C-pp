#include <stdio.h> <string.h>
/* Lexico */
int  num; //variable con el numero a analizar
char resultado[21]; //variable para informar

int main(){
  printf("Ingrese un numero entero: ");
  scanf("%d",&num);
  if (num<0) {
    //num es negativo
    strcpy(resultado,"negativo");
  }
  else {
    //num es positivo
    strcpy(resultado,"positivo");
  } 
  printf("El numero es %s \n", resultado);
  return 0;
}
