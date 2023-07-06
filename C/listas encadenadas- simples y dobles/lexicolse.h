#ifndef LISTA_H
#define LISTA_H

struct nodo {
        int info;
        struct nodo *next;
        };

struct lista {
        struct nodo *head;
        };


//Inserta un nodo al comienzo de la lista
void InsertarC(struct lista *l);

//Inserta un nodo al final de la lista
void InsertarF(struct lista *l);

//Inicializa la lista
void Inicializar(struct lista *l);

//Elimina el primer nodo
void EliminarC(struct lista *l);

//Muestra toda la lista
void mostrar_lista(struct lista l);

#endif
