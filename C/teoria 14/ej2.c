//Ej 2
#include <stdio.h>

struct TelemCar { 
                  char info; 
                  struct TelemCar *next; 
                }; 

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
  struct TelemCar *nuevo, *sec;
  
  nuevo = (struct TelemCar *) NULL; 
  sec = (struct TelemCar *) NULL; 

  nuevo = (struct TelemCar *) malloc (sizeof(struct TelemCar)); 
  nuevo->info='A'; 
  nuevo->next=NULL; 
  sec =nuevo;
  nuevo = (struct TelemCar *) malloc (sizeof(struct TelemCar)); 
  nuevo->info='L'; 
  nuevo->next=sec; 
  sec=nuevo;
  nuevo = (struct TelemCar *) malloc (sizeof(struct TelemCar)); 
  nuevo->info='O'; 
  nuevo->next=sec;
  sec=nuevo;
  nuevo = (struct TelemCar *) malloc (sizeof(struct TelemCar)); 
  nuevo->info='H'; 
  nuevo->next=sec;
  sec=nuevo;
  mostrar_lista(sec); 
  return(0); 
}
