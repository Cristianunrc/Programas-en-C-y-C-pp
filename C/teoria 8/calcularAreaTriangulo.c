#include <stdio.h>
float base, altura;	//base y altura del triangulo
float area;  	//area del triangulo
void ObtenerDatos(float *b, float *h);
void CalcArea(float b, float h, float *a);
void InformarArea(float a);
int main(){
    ObtenerDatos(&base, &altura);
    CalcArea(base, altura, &area);
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
void CalcArea(float b, float h, float *a){
    *a = (b*h)/2;
}
void InformarArea(float a){
    printf("El area del triangulo es: %f \n",a);
}
