#include <stdio.h>
#include <stdlib.h>

struct dato {
        char nombre[20];
        char telefono[12]; // probar poner una variable de tipo int
};

struct nodo {
        struct dato info;
        struct nodo *next;
};


struct nodo *primero, *ultimo;

void mostrar_menu() {
      printf("\nMenu:\n=====\n\n");
      printf("1.- Anadir elementos(al ultimo).\n");
      printf("2.- Borrar elementos(en una posicion indicada).\n");
      printf("3.- Mostrar lista.\n");
      printf("4.- Salir.\n\n");
      printf("Escoge una opcion: ");fflush(stdout);
 }

/* Con esta accion colocamos un elemento al final de la lista */
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
         
         (*ultimo)->next = nuevo;
          *ultimo = nuevo;
      }
  }
  
void borrar_elemento(struct nodo **primero){
	struct nodo *q,*aux;
	int i, pos;
	printf("Ingresar la posicion del elemento que desea eliminar: ");
	scanf("%d",&pos);
			if(*primero==NULL){
				printf("No hay elementos disponibles a eliminar.\n");
			}
			else{
				if(*primero!=NULL && pos<1){
					printf("Numero ingresado incorrecto, ingrese un numero mayor o igual a 1.");
				}
				else{
					if(*primero!=NULL && pos==1){
						q=*primero;
						*primero= q->next;
						free(q);
					}
					else{ // primero distinto a null y posicion mayor a 1
				    	q=*primero;
				    	i=1;
				    	while(q!=NULL && pos>i){
								aux=q;
								q=q->next;
								i++;
						}
						aux->next = q->next;
						free(q);
					}
				}
			}
}

 void mostrar_lista(struct nodo *primero) {
    struct nodo *aux; // lo usamos para rrecorrer la lista

    int i=0;
    aux = primero;
    printf("\nMostrando la lista completa.\n");
    while (aux!=NULL) {
          printf("Nombre: %s y Telefono: %s\n",(aux->info).nombre,(aux->info).telefono);
          aux = aux->next;
          i++;
    }
    if(i==0){
    	printf( "\nLa lista esta vacia!!\n" );
    }
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
        case 2: borrar_elemento(&primero);
                break;
        case 3: mostrar_lista(primero);
                break;
        case 4: exit(1);
        default: printf( "Opcion no valida\n" );
                 break;
     }
   } while (opcion!='4');

 }
