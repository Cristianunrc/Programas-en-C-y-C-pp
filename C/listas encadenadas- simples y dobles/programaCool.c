#include<stdio.h>
#include<stdlib.h>

struct dato{
		int num;
};

struct Tnodo{
		struct dato info; // info contiene el campo struct dato de tipo entero
		struct Tnodo *next;
};

struct Tnodo *p;

void Mostrar_Menu(){
	printf("Menu de opciones: \n");
	printf("1- Inserta elementos al comienzo \n");// lista 
	printf("2- Inserta elementos al final \n");// lista
//	printf("5- Eliminar elementos al final \n");
	printf("3- Eliminar elementos en una determinada posicion a elegir \n");
	printf("4- Mostrar elementos \n");
	printf("5- Salir\n");
	printf("Escoga una opcion:"); fflush(stdout);
	
}

void Insertar_comienzo(struct Tnodo **p){
	struct Tnodo *q;
	//q=(struct Tnodo*)malloc(sizeof(struct Tnodo));
		if(*p==NULL){
		q=(struct Tnodo*)malloc(sizeof(struct Tnodo));
		printf("Ingresar un numero:"); fflush(stdout);
		scanf("%d",q->info.num);
		*p=q;
		}
		else{ // p es distinto a null
		q=(struct Tnodo*)malloc(sizeof(struct Tnodo));
		printf("Ingrese un numero:"); fflush(stdout);
		scanf("%d",q->info.num);
		q->next=*p;
		*p=q;
		}	 
}

void Insertar_final(struct Tnodo **p){
	struct Tnodo *aux,*q;
	
	if(*p==NULL){ // igual a insertar un nodo al comienzo de la lista 
		q=(struct Tnodo*)malloc(sizeof(struct Tnodo));
		printf("Ingresa un numero:"); fflush(stdout);
		scanf("%d",q->info.num);
		*p=q;
	}
	else{// p es distinto a NULL
		aux=*p;
		while(aux->next!=NULL){
			aux = aux->next;
		}
		q=(struct Tnodo*)malloc(sizeof(struct Tnodo));
		printf("Ingresa un numero:"); fflush(stdout);
		scanf("%d",q->info);
		aux->next = q;
		q->next = NULL;
	}
}

void Eliminar_posicion(struct Tnodo **p){
	struct Tnodo *q,*aux;
	int pos,i;
	printf("Ingrese la posicion que del elemento que desea eliminar:");
	scanf("%d",&pos);
	
			if(*p!=NULL && pos<1){
				printf("Numero ingresado incorrecto, ingrese un numero mayor o igual a 1");
			}
			else{
				if(*p!=NULL && pos==1){
					q=*p;
					*p= q->next;
					free(q);
				}
				else{ // primero distinto a null y posicion mayor a 1
				    q=*p;
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

void Mostrar_lista(struct Tnodo *p) { 
  //struct Tnodo *auxiliar; /* lo usamos para recorrer la lista */ 
  int i; 
  i=0; 
  //auxiliar=p; 
  printf("\nMostrando la lista completa:\n"); 
  while (p!=NULL){ 
    	printf("Numero:%d\n",(p->info).num); 
    	p=p->next; 
    	i++; 
  } 
  if (i==0) printf( "\nLa lista esta vacia!\n" ); 
} 


int main(){
	int opcion;
	p=NULL;
//	p=NULL;
		do{
			Mostrar_Menu();
			scanf("%d",&opcion);
			switch (opcion){
				case 1: Insertar_comienzo(&p);
						break;
				case 2: Insertar_final(&p);
						break;
				case 3:	Eliminar_posicion(&p);			
			     		break;
				case 4: Mostrar_lista(p);
						break;
				case 5: exit(1);
				default: printf( "Opcion no valida\n" );
                 		break;				 						
			}
		} while (opcion!='5');
}

