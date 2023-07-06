#include <stdio.h>
/* Define una constante */
#define Iva 21

/* Variables */
float precioBruto;       //variable dato
float precioFinal;	//variable resultado

int main(){
  //Se debe utilizar como separador de decimales el punto (no la coma)
  scanf("%f",&precioBruto);
  precioFinal = precioBruto + (precioBruto*Iva)/100;
  printf("El precio final es: %f \n", precioFinal);
  return 0;
}

