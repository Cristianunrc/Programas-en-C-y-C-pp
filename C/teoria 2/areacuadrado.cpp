#include <stdio.h>
/* Variables globales */
int lado; 
int areaCuad;

int main(){
  scanf("%d",&lado);
  areaCuad = lado * lado;
  printf("El area es: %d \n",areaCuad );
  return 0;
}

