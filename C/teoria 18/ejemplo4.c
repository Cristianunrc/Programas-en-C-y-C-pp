 #include <stdio.h>

 int main(){
    char car;
    FILE* archivo;
    archivo = fopen("test.txt","r");
    if(archivo!=NULL){
		while(!feof(archivo)){ 
			car = fgetc(archivo);
			printf("%c",car);
		}
    	fclose(archivo);
    }
}
