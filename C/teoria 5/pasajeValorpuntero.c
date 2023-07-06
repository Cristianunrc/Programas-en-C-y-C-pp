#include <stdio.h>
float base, altura;	//base y altura del triangulo
float area;  	//area del triangulo

void ObtenerDatos(float *x, float *y);
void CalcularAreaTriangulo(float baseTri, float alturaTri, float *areaTri);
void InformarResultados(float a);

int main(){
  ObtenerDatos(&base, &altura);
  CalcularAreaTriangulo(base, altura, &area);
  InformarResultados(area);
  return 0;
}
 
void ObtenerDatos(float *x, float *y){
    printf("Ingrese la base: ");
    scanf("%f",&(*x));
    printf("Ingrese el altura: ");
    scanf("%f",&(*y));	
}
void CalcularAreaTriangulo(float baseTri, float alturaTri, float *areaTri){
    *areaTri = (baseTri*alturaTri)/2;
}
void InformarResultados(float a){
    printf("El area del triangulo es: %f \n",a);
}
