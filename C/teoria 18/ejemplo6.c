#include <stdio.h>
//size_t fwrite(void *ptr, size_t size, size_t nmemb, FILE *stream);
struct { char nombre[30]; int edad;} 
reg; FILE *f;
int main() {
	
	f = fopen("personas.dat","a+"); 
	printf("ingrese nombre:");
	gets(reg.nombre); 
	printf("ingrese edad:");
	scanf("%d",&reg.edad); 
	fwrite(&reg,sizeof(reg),1,f);
	fclose(f);
	getchar();

	}
