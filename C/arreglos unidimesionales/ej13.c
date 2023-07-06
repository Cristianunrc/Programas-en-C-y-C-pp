#include <stdio.h>
#define MAX 30

typedef struct {
		char arr[MAX]; // arr es arreglo de tipo caracter
		int cant;
}TData;

TData var;

void cargar(TData *p);
int contar(TData p,int inferior,int superior);
int sup;
int inf;
int aux;

int main(){
	cargar(&var); // accion cargar
	inf=0;
	sup = var.cant;
	aux = contar(var,inf,sup); // a axu le asigno la funcion contar(..)
	
	printf("La cantidad de palabras que empiezan con la letra son %d\n",aux);
	
	return 0;
}
	
void cargar(TData *p){
		int i; // variable de control
		
		printf("Ingrese la cantidad de letras del arreglo: ");
		scanf("%d",&p->cant);
		
		i=0;
		while (i<p->cant){
			printf("\nIngrese la letra %d\n --->",i+1);
			scanf("%s",&p->arr[i]);
			
			i++;
		}
}

int contar(TData p, int inferior, int superior){
	char m; // m es de tipo caracter
	m = 'm';
	
	if(inferior = superior){
		return (0);
	}else{
		if(inferior < superior){
				
				if((p.arr[inferior] == m) && (inferior == 0 || p.arr[inferior-1] == ' ')){
						return (contar(p, inferior + 1, superior) +1);
				}else{
						return (contar(p, inferior + 1,superior));
				}
		}
	}
}
