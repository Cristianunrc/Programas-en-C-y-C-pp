#include <stdio.h>
#include <string.h>

int main(){
FILE* archivo;
int errno;
archivo = fopen("test.txt","r"); if(archivo!=NULL){
printf("Apetura exitosa!\n"); if (fclose(archivo)!=0) {
printf("No se ha podido cerrar!\n",strerror(errno)); }
}else
printf("Error al abrir: %s\n",strerror(errno));
}
