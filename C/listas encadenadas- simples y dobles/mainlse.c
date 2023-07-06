#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


struct lista t;
int posi;

int main(){
	posi=3;
	Inicializar(&t);
	InsertarC(&t);
	InsertarF(&t);
	mostrar_lista(t);

	return (0);
}
