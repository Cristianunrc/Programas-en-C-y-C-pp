#include <stdio.h>

/* Variables */
int  num;     //variable para almacenar el numero a analizar

int main(){
  printf("Ingrese un numero entero: ");
  scanf("%d",&num);
  if (num>=0) {
    //num es positivo
    printf("%d es positivo \n", num);
  } 
  printf("Muchas gracias! \n");
  return 0;
}

