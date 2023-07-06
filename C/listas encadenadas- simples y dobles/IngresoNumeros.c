#include <stdio.h>
#include <stdlib.h>

struct Tnodo{
	int info;
	struct Tnodo *next;
};


void MostrarLista(struct Tnodo *primero) { 
  struct Tnodo *aux; /* lo usamos para recorrer la lista */ 
  int i; 
 
  i=0; 
  aux=primero; 
  printf("\nMostrando la lista completa:\n"); 
  while (aux!=NULL) { 
    printf("%d",aux->info); 
    aux=aux->next; 
    i++; 
  } 
	if(i==0){
		printf( "\nLa lista esta vacia!\n" );
	} 

}

int main(){
		struct Tnodo *primero,*segundo;
		
		primero = (struct Tnodo *) malloc (sizeof(struct Tnodo));
		primero->info=1;
		primero->next=NULL;
		segundo=primero;
		primero = (struct Tnodo *) malloc (sizeof(struct Tnodo)); 
  		primero->info=2; 
  		primero->next=segundo; 
  		segundo=primero;
  		primero = (struct Tnodo *) malloc (sizeof(struct Tnodo)); 
  		primero->info=3; 
  		primero->next=segundo;
  		segundo=primero;
  		primero = (struct Tnodo *) malloc (sizeof(struct Tnodo)); 
  		primero->info=4; 
  		primero->next=segundo;
  		segundo=primero;
  		MostrarLista(primero);
		return 0;			
}


