// CalcularAreaTriángulo
#include <stdio.h>
float base, altura;	//base y altura del triangulo
float area;  	//area del triangulo
void ObtenerDatos(float *b, float *h);
float CalcArea(float b, float h);
void InformarArea(float a);
int main(){
    ObtenerDatos(&base, &altura);
    area = CalcArea(base, altura);
    InformarArea(area);
    return 0;
}
void ObtenerDatos(float *b, float *h){
    do {
        printf("Ingrese la base: \n ");
        scanf("%f",&(*b));
    } while ((*b)<=0); 
    do {
        printf("Ingrese el altura: \n");
        scanf("%f",&(*h));	
    } while ((*h)<=0);
}
float CalcArea(float b, float h){
    return (b*h)/2;
}
void InformarArea(float a){
    printf("El area del triangulo es: %f \n",a);
}
