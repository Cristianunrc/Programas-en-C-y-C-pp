// Ejercicio de un parcial. En una lista simplemente encadenada con elemento ficticio, formada por letras en cada uno de los campos infos. Recorrer la lista y una vez
// encontrada la letra A hacer que el doblete de esa letra pase a ser el primer elemento de la lista. Luego mostrarla

#include<stdio.h>
#include<stdlib.h>

struct TNode{
	char info;
	struct TNode *next;
};

struct lista{
	struct TNode *head;
};

struct lista list;

void crearLista(struct lista *p){ // creo la lista para llevar a cabo la accion de busquedaA
	struct TNode *q,*r;
		q=(struct TNode*)malloc(sizeof(struct TNode));
		q->info='B';
		p->head=q;
		r=q;
		q=(struct TNode*)malloc(sizeof(struct TNode));
		q->info='Z';
		r->next=q;
		r=q;
		q=(struct TNode*)malloc(sizeof(struct TNode));
		q->info='R';
		r->next=q;
		r=q;
		q=(struct TNode*)malloc(sizeof(struct TNode));
		q->info='A';
		r->next=q;
		r=q;
		q=(struct TNode*)malloc(sizeof(struct TNode));
		q->info='M';
		r->next=q;
		r=q;
		q->next=NULL;
}

void busquedaA(struct lista *p){
	struct TNode *aux,*q;
		q=p->head;
			while(q!=NULL && q->info!='A'){
				aux=q;
				q=q->next;
			}
			if(q==NULL){
				printf("No se encontro la letra 'A'.\n");
			}
			else{
				aux->next=q->next;
				q->next=p->head;
				p->head=q;
			}
}

void mostrar(struct lista p){
	struct TNode *aux;
	aux=p.head;
		printf("Mostrando lista.\n");
		while(aux!=NULL){
			printf("%c\n",aux->info);
			aux=aux->next;
		}
}

int main(){
	crearLista(&list);
	busquedaA(&list);
	mostrar(list);
	return 0;
}

