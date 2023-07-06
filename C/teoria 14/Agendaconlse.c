#include <stdio.h>
#include <stdlib.h>

struct dato {
        char nombre[20];
        char telefono[12];
        };

struct nodo {
        struct dato info;
        struct nodo *next;
        };


struct nodo *primero, *ultimo;

void mostrar_menu() {
      printf("\n\nMenu:\n=====\n\n");
      printf("1.- Anadir elementos\n");
      printf("2.- Borrar elementos\n");
      printf("3.- Mostrar lista\n");
      printf("4.- Salir\n\n");
      printf("Escoge una opcion: ");fflush(stdout);
 }

/* Con esta funcion anadimos un elemento al final de la lista */
void anadir_elemento(struct nodo **primero, struct nodo **ultimo) {
      struct nodo *nuevo;

      /* reservamos memoria para el nuevo elemento */
      nuevo = (struct nodo *) malloc (sizeof(struct nodo));
      if (nuevo==NULL){
        printf( "No hay memoria disponible!\n");
      }
      else {
          printf("Nombre: "); fflush(stdout);
          scanf("%s",nuevo->info.nombre);
          printf("Telefono: "); fflush(stdout);
          scanf("%s",(nuevo->info).telefono);
          /* el campo next va a ser NULL por ser el ultimo elemento
          de la lista */
          nuevo->next = NULL;
          /* ahora metemos el nuevo elemento en la lista. lo situamos
          al final de la lista */
          /* comprobamos si la lista esta vacia. si primero==NULL es que no
         hay ningun elemento en la lista. tambien vale ultimo==NULL */
      };
      if (*primero==NULL) {
         printf( "Primer elemento\n");
         *primero = nuevo;
         *ultimo = nuevo;
       }
      else {
         /* el que hasta ahora era el ultimo tiene que apuntar al nuevo */
         (*ultimo)->next = nuevo;
         /* hacemos que el nuevo sea ahora el C"KE!C"KB+ltimo */
        *ultimo = nuevo;
      }
  }

 void mostrar_lista(struct nodo *primero) {
    //struct nodo *auxiliar; /* lo usamos para recorrer la lista */

    int i=0;
    //auxiliar = primero;
    printf("\nMostrando la lista completa:\n");
    while (primero!=NULL) {
          printf( "Nombre: %s y Telefono: %s\n",
          (primero->info).nombre,(primero->info).telefono);
          primero = primero->next;
          i++;
    }
    if (i==0) printf( "\nLa lista esta vacia!!\n" );
}

 int main() {
   int opcion;

    primero =  NULL;
    ultimo =  NULL;
    do {
      mostrar_menu();
     scanf("%d",&opcion);
     switch ( opcion ) {
        case 1: anadir_elemento(&primero,&ultimo);
                break;
        case 2: printf("No disponible todavia!\n");
                break;
        case 3: mostrar_lista(primero);
                break;
        case 4: exit(1);
        default: printf( "Opcion no valida\n" );
                 break;
     }
   } while (opcion!='4');

 }
