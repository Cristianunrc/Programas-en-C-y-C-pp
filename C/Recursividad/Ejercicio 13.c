
/*
					Descripcion del programa:
					
	Dada una frase alfanumerica y una letra muestra por pantalla
	la cantidad de palabras que comienzan con esa letra.
	
					Integrantes del grupo:
					
				- Calderon Agustin
				- Gonzalez Ignacio
				- Suarez Mateo
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 31

typedef struct{
	char a[MAX];
}TFrase;

TFrase frase1;
char letra;
int cant;
int c;

int Palabra(TFrase fra, char l, int cant, int conta);

void Acomodar(int cant, TFrase *fra);

int Verificar (TFrase fra, int cant);

void main(){

	c = 0;

	do {		
			if (c == 0){
				printf("Ingrese frase de no mas de 30 caracteres alfanumericos: \n");
	    }else{
	    	printf("Ingrese solo caracteres alfanumericos!! (30 caracteres max) \n");
	    }
	    
	    c++; 		
			fgets(frase1.a, MAX - 1, stdin);
			cant = strlen (frase1.a);
	
	} while(Verificar (frase1, cant - 1) == 1); //ciclo para ingresar una frase alfanumerica
	
	Acomodar(cant, &frase1);
	cant = strlen (frase1.a);

	do {
			printf("Ingrese una letra \n");
			scanf("%c", &letra);
			while(getchar()!='\n');
		
	} while(isalnum(letra) == 0); 	//ciclo para ingresar un caracter alfanumerico
	letra= tolower(letra);		//en caso de que la letra sea mayuscula se la convierte en minuscula
	
	printf("Existen %d palabra/s que empiezan con %c\n", Palabra(frase1, letra, cant, 0), letra);

}

/*
	Funcion que recorre recursivamente la frase buscando las 
	palabras que comienzan con la letra seleccionada, luego 
	retorna esa cantidad.
*/

int Palabra(TFrase fra, char l, int cant, int conta){

	if(cant == 0){
		return (conta);

	}else if(cant > 0){

		if(fra.a[cant - 1] == ' ' && fra.a[cant] == l){
			return (Palabra (fra, l, cant - 1, conta + 1));

		}else{
			return(Palabra(fra, l, cant - 1, conta));	 

		}
		
	}
	
}
	
/*
	Accion que verifica recursivamente si la frase comienza con espacio
	en balnco, de no ser asi lo mueve todos los elementos y lo inserta en 
	el principio.
	Tambien revisa si hay letras mayuscula y en caso de haberlas las 
	convierte en minuscula.
*/

void Acomodar(int cant, TFrase *fra){
	
	if(cant<= 0){
		if(isupper(fra->a[cant]) != 0){
			fra->a[cant]= tolower(fra->a[cant]);
		}
		
		fra->a[cant + 1]= fra->a[cant];
		fra->a[cant]= ' ';

	}else if(isspace(fra->a[0]) == 0){
		if(isupper(fra->a[cant]) != 0){
			fra->a[cant]= tolower(fra->a[cant]);
		}
		
		fra->a[cant + 1]= fra->a[cant];
		Acomodar(cant - 1, fra);

	}
	
}

/*
	Funcion que verifica recursivamente si la frase 
	contiene algun caracter no alfanumerico distinto 
	del espacio en blanco, retorna 0 si la frase no 
	contiene nunguno de estos caracteres o 1 si tiene alguno.
*/

int Verificar (TFrase fra, int cant){
	
	if(cant == 0){
		return cant;
		
	}else if ( (isalnum(fra.a[cant]) != 0) || (isspace(fra.a[cant]) != 0) ){
		return (Verificar(fra, cant - 1));
  
	}else{
		return 1;
	
	 } 

}

/*
			Descripcion de las funciones usadas de ctype.h

	int isalnum(int c)
	Esta funcion verifica si el caracter pasado es alfanumerico.

	int isupper (int c)
	Esta funcion verifica si el caracter pasado es una letra mayuscula.

	int isspace (int c)
	Esta funcion verifica si el caracter pasado es espacio en blanco.

	int tolower (int c)
	Esta funcion convierte letras mayusculas a minusculas.

*/
/*
			Descripcion de las funciones usadas de string.h

	size_t strlen (const char * str)
	Calcula la longitud de la cadena hasta pero sin incluir el caracter nulo de terminacion.

*/


