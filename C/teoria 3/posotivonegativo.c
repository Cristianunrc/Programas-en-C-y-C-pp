#include <stdio.h>
/* Lexico */
int  num; //variable con el numero a analizar
int resultado;// variable para informar
int main(){
  printf("Ingrese un numero entero: ");
  scanf("%d",&num);
  if (num<0) {
    //num es negativo
    resultado=0;
  }
  else {
    //num es positivo
    resultado=1;
  } 
  return 0;
}
