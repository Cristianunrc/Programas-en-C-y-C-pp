#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(){
	FILE* archivo;
	archivo = fopen("test.txt","r"); 
	if(archivo!=NULL){
		printf("Apetura exitosa!\n"); 
		if (fclose(archivo)!=0) 
			printf("No se ha podido cerrar!%s \n",strerror(errno)); 
		}else
			printf("Error al abrir: %s\n",strerror(errno));
}
