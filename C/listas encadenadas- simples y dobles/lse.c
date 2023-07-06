#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct nodo * CrearNodo(){
	struct nodo *nuevo;
	nuevo = (struct nodo *) malloc (sizeof(struct nodo));
	if (nuevo==NULL){
	 	exit(EXIT_FAILURE); 
	}
	else {
	 	printf("Inserte un numero");
		scanf("%d",&nuevo->info);
		nuevo->next = NULL;
		return nuevo;
	}
}

void InsertarC(struct lista *l) {
	struct nodo *p;
	p= CrearNodo();
	(p->next)=(l->head);
	if ((&l->head)==NULL){
		(l->head)=p;
	}
	else { //si la lista no es vacia
		(p->next)=(l->head);
		(l->head)=p;
	}
}

void InsertarF(struct lista *fin) {
	struct nodo *p;
	p= CrearNodo();
	if (p==NULL){
		InsertarC(fin);
	}
	else {
		p=(fin->head);
		while (p->next != NULL){
			p=(p->next);
			
		}
		struct nodo *r;
		r=CrearNodo();
		(p->next)=r;
		(r->next)=NULL;
	}
}

void Inicializar(struct lista *l) {
	(l->head)=NULL;
}
	

void EliminarC(struct lista *l) {
	struct lista *elim;
	(elim->head)=(l->head);
	(l->head)=(l->head).next;
	free(elim);
}


void mostrar_lista(struct lista l) {
	struct nodo *aux;
	aux= CrearNodo();
	aux=(l.head);
	if ((l.head)==NULL){
		printf("La lista esta vacia\n");
	}
	else {
		while ((aux->next) != NULL) {
			printf("%d",(aux->next)->info);
			(aux->next)=(aux->next)->next;
		}
	}
}

