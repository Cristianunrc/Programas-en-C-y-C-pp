//Programa realizado por Cristian Elias Herrera, DNI:38.106.484, Comision:2
#include <stdio.h>
#define N 10

typedef struct{
        int cant;
        int a[N];
}Tdata;

Tdata par; // Defino una variable par que pertenece al tipo registro.


int Cargar(Tdata *q);// Accion cargar 
int MostrarSplitBy(Tdata p);// Accion mostrar

int main(){
    Cargar(&par); 
    MostrarSplitBy(par); 
}        
int Cargar(Tdata *q){ //Desarrollo del cuerpo de la accion cargar 
    int i;
    printf("Ingresar la cantidad de numeros:");
    scanf("%d",&q->cant);
    for(i=0;i<q->cant;i++){
    printf("Ingresar el %dº numero:",i+1);
    scanf("%d",&q->a[i]);
    }
}
int MostrarSplitBy(Tdata p){ //Desarrollo cuerpo de accion mostrarSpltby 
    int j;
    for(j=0;j<p.cant;j++){
       if (p.a[j] % 2==0){
          printf("El numero par es: %d\n",p.a[j]);
       }
	   else{
	        printf("El numero impar es: %d\n",p.a[j]);
	   }                
    }
}           
                  
       
               
