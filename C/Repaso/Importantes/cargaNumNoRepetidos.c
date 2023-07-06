#include <stdio.h>
#define MAX 40
struct TData{
    int arreglo[MAX];
    int cant;
};

struct TData registro;

void load(struct TData * n);
int i;

int main(){
    load(&registro);
    
    for( i=0;i<registro.cant;i++){ // muestra al final como queda el arreglo
        printf(" %d ", registro.arreglo[i]);
    }
    return 0;
}

void load(struct TData * n){
    int numero;
    int repetido;
    int j=0;
    printf("Indique la cantidad de numeros que desea ingresar: ");
    scanf("%d", &n->cant);
    
    while(j < n->cant){
        repetido = 0;
        printf("Digite el numero que desea ingresar: ");
        scanf("%d", &numero);
        if(j>0){ // solo se ejecuta luego de que se añada el primer valor al arreglo
        	int k;
            for(k=0;k<j;k++){ //recorre todos los numeros que hay ingresados en el arreglo, buscando un repetido
                if(n->arreglo[k] == numero){
                    repetido = 1;
                }
            }
            if(repetido == 0){
                n->arreglo[j] = numero;
                printf("El numero fue agregado en la posicion %d.\n",j+1);
                j++;
            } else {
                printf("El numero que ingreso es repetido. Vuelva a ingresar el numero.\n");
            }
        } else { // se ejecuta cuando el arreglo está vacio, colocando el primer valor.
            n->arreglo[j] = numero;
             printf("Numero agregado en la posicion %d.\n",j+1);
            j++;
        }
    }
}



