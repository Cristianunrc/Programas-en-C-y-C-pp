#include <stdio.h>

int main(){
    char c;
    FILE* archivo;
    archivo = fopen("test.txt","r");
    if(archivo!=NULL){
		while( fscanf(archivo,"%c",&c)==1 )
	 		printf("%c",c);
    fclose(archivo);
	} 
}
