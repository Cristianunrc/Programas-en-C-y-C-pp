#include <stdio.h>
int s1, s2, resultado;
int funcionSuma(int a, int b);
void accionSuma(int x, int y, int *res);

int main(){
  printf("Ingrese el primer valor para sumar: ");
  scanf("%i",&s1);
  printf("Ingrese el segundo valor para sumar: ");
  scanf("%i",&s2);
  printf("Llamamos a funcionSuma (pasaje por valor) \n");
  printf("Valor de s1: %i, valor de s2: %i\n",s1,s2);
  resultado = funcionSuma(s1,s2);
  printf("Resultado de la funcionSuma: %i\n",resultado);
  printf("Llamamos a la accionSuma con s1 y s2, ");
  printf("y el resultado lo guardamos usando un puntero a entero llamado res \n");  
  printf("Valor de s1: %i, valor de s2: %i\n",s1,s2);
  accionSuma(s1,s2,&resultado);
  printf("Resultado de la accionSuma: %i\n",resultado);
  printf("Valor de la posicion en memoria de la variable resultado: %p\n",&resultado);
  return 0;
}

int funcionSuma(int a, int b){
  return a+b;
}

void accionSuma(int x, int y, int *res){
  *res = x+y;
}
