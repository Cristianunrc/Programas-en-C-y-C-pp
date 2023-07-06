 #include <stdio.h>

 int main(){
    char cadena[128];
    FILE* archivo;
    archivo = fopen("test.txt","r");
    if(archivo!=NULL){
		while(!feof(archivo)){ 
			fgets(cadena,128,archivo); 
			printf("%s",cadena);
		}
	    fclose(archivo);
    }
}
