#include <stdio.h>
/* Variables */
int  num; //variable para almacenar el numero a analizar

int main(){
  printf("Ingrese un numero entero: ");
  scanf("%d",&num);
  if (num <=0) {
    //num es negativo
    num=num*(-1); // num=-num
  } 
  printf ("Valor absoluto es: %d\n", num);
  return 0;
}
