//Ej 3
#include <stdio.h>

struct TelemCar { 
                  char info; 
                  struct TelemCar *next; 
                }; 

/* Con esta funcion anadimos un elemento al final de la lista */ 
void anadir_palabra_hola(struct TelemCar **primero) { 
  struct TelemCar *nuevo; 
  /* reservamos memoria para el nuevo elemento */ 
  nuevo = (struct TelemCar *) malloc (sizeof(struct TelemCar)); 
  if (nuevo==NULL) printf( "No hay memoria disponible!\n"); 
  else {
    nuevo->info='A'; 
    nuevo->next=NULL; 
    *primero=nuevo;
    nuevo = (struct TelemCar *) malloc (sizeof(struct TelemCar)); 
    nuevo->info='L'; 
    nuevo->next=*primero; 
    *primero=nuevo;
    nuevo = (struct TelemCar *) malloc (sizeof(struct TelemCar)); 
    nuevo->info='O'; 
    nuevo->next=*primero;
    *primero=nuevo;
    nuevo = (struct TelemCar *) malloc (sizeof(struct TelemCar)); 
    nuevo->info='H'; 
    nuevo->next=*primero;
    *primero=nuevo;
  }     
} 
 
void mostrar_lista(struct TelemCar *primero) { 
  struct TelemCar *auxiliar; /* lo usamos para recorrer la lista */ 
  int i; 
 
  i=0; 
  auxiliar=primero; 
  printf("\nMostrando la lista completa:\n"); 
  while (auxiliar!=NULL) { 
    printf("%c",auxiliar->info); 
    auxiliar=auxiliar->next; 
    i++; 
  } 
  if (i==0) printf( "\nLa lista esta vacia!\n" ); 
} 

int main() { 
  struct TelemCar *q, *r, *w, *x;
  
  r = (struct TelemCar *) NULL; 
  w = (struct TelemCar *) NULL; 
  x = (struct TelemCar *) NULL;
  q = (struct TelemCar *) NULL; 

  anadir_palabra_hola(&q); 
  r=(struct TelemCar *) malloc(sizeof(struct TelemCar));
  r->info='C';
  r->next=q;
  q=r;
  w=(struct TelemCar *) malloc(sizeof(struct TelemCar));
  w->info='B';
  w->next=q;
  q=w;
  x=(struct TelemCar *) malloc(sizeof(struct TelemCar));
  x->info='A';
  x->next=q;
  q=x;
  mostrar_lista(q); 
  return(0); 
}
