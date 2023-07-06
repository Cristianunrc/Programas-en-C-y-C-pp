#include <stdio.h>
int base; // 2 bytes
float prom; //4 bytes
char op1, op2; //1 byte c/u
int *pBase;

int main(){
  base= 5;
  pBase = &base;
  printf("Valor de base es: %d \n", base);
  printf("Direccion de base es: %p \n", &base);
  printf("Valor del puntero pBase es: %p \n", pBase);
  printf("Valor que apunta el puntero pBase es: %d \n", *pBase);
  printf("Direccion del puntero pBase es: %p \n", &pBase);
  return 0;
}
