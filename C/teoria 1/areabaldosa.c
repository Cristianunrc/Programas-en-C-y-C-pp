#include <stdio.h>
/* l�xico */
int lado; 
int areaCuad;

/* funci�n principal (main) en todo programa C */
int main(){
  scanf("%d",&lado); // dir de memoria de la var lado
  areaCuad = lado * lado;
  printf("%d",areaCuad );
/* otra forma: printf("El area es: %d \n",areaCuad );*/
  return 0;
}
