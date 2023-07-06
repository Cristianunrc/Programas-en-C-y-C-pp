#include <stdio.h>
#define MAX 30

typedef struct {  //Registro para manejar el arreglo y la cantidad
		char arr[MAX];
		int cant;
}TData;

/* Declaracion de acciones /funciones */
void cargar(TData *p,char *cadena);
int contar(TData p, int inferior, int superior, char letra,char cadena[]);
/* Declaracion de variables */
TData var; //Variable global para manejar el registro
int sup;
int inf;
int aux;
char letra;
char cadena[MAX];

/* Programa principal */
int main(){
	cargar(&var,cadena);
	sup = var.cant;
	inf=0;
	printf("\nIngrese la letra a contar\n");
	scanf(" %c",&letra);
	aux = contar(var,inf,sup,letra,cadena);
	printf("La cantidad de palabras que empiezan con la letra '%c' son %d\n",letra,aux);
	return 0;
}

/* Accion para cargar los datos en el arreglo */

	void cargar(TData *p, char *cadena){
	int i;
	printf("\nIngrese la cantidad de letras del arreglo(maximo 50)\n");
	scanf("%d",&p->cant);
	printf("\nIngrese las palabras a analizar\n");
	fgets(p->arr, p->cant, stdin);
	}


/* Funcion que tendria que contar y devolver la cantidad de palabras que empiezan con m. No funciona. */
int contar(TData p, int inferior, int superior, char letra, char cadena[]){
	if (inf = sup){
		return 0;

	}
		else { 
			if (inf < sup){
				if((p.arr[inf] == letra) && (inf == 0 || p.arr[inf-1] == ' ')){
					return (contar(p, inferior+1, superior, letra, cadena) +1);
				}
				else {
					return contar(p,inferior+1,superior, letra, cadena);
				}
			}
		}
}
