/*  Programa que realiza la lectura de datos de un archivo de texto, caracter por caracter.

*/
#include <stdio.h>

int main(){
	char car;
	FILE* archivo; // archivo pertenece archivo de texto
	archivo= fopen("test.txt","r"); // abro el archivo (nombre externo, modo apertura (lectura))
	
	if(archivo !=NULL){ // si archivo no esta vacio
		while(!feof(archivo)){// mientras no sea el fin del archivo
			car= fgetc(archivo);// se lee un caracter desde un archivo abierto en modo apertura, operador fgetc(x) 
			printf("%c",car); // informa la letra por pantalla
		}
		fclose(archivo); // se cierra el archivo, operador fclose(x)
	}
}
