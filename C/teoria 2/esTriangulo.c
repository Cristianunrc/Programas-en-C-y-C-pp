#include <stdio.h>
#include <string.h>

int l1,l2,l3;
char aux[50];

char Triangulo(int la1, int la2, int la3, char* rta);

int main(){
	
	printf("Ingresar la longitud del lado 1:");
	scanf("%d",&l1);
	printf("Ingresar la longitud del lado 2:");
	scanf("%d",&l2);
	printf("Ingresar la longitud del lado 3:");
	scanf("%d",&l3);
	
	Triangulo(l1,l2,l3,aux);
	
	printf("(%s)",aux);	
}

char Triangulo(int la1, int la2, int la3,char rta[50]){
	
	if ((la1+la2)>la3 || (la1+la3)>la2 || (la2+la3)>la1){
	  	
	  if (la1==la2 && la1==la3){
	  	 strcpy(rta,"es equilatero");
	  }
	  else{
	  	if (la1!=la2 && la1!=la3 && la3!=la2){
	  		strcpy(rta,"es escaleno");
	  	}
		else{ // dos lados iguales y un lado distinto.
		strcpy(rta,"es isosceles");
		} 	 
	  } 
	  
	}
	else{
		 strcpy(rta,"estos lados no forman un triangulo");
	}
}

