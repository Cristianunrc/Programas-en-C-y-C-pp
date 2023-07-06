#include <stdio.h>

char A;
int vocal; // variable donde almaceno la funcion esVocal
int cons; // variable donde almaceno la funcion esConsonante

int esVocal(char a);
int esConsonante(char a);

int main(){
	printf("Ingrese una vocal o consonante y le diremos cual ha ingresado, de lo contrario se indicara que lo ingresado no es vocal ni consonante: ");
	scanf("%c",&A);
	
	vocal = esVocal(A);
	cons = esConsonante(A);
	
	if((vocal) || (cons)){
		printf("La tecla que usted ingreso es ----> %c",A);
	}else{ // No ingreso una vocal o una consonante
		printf("La tecla ingresada es un simbolo, numero, signo o cualquier mamada que haya ingresado wey!!");
	}	
	return (0);
}

int esVocal(char a){
	
	if (a =='A' || a =='a' || a =='E' || a =='e' || a =='I' || a =='i' || a =='O' || a =='o' || a =='U' || a =='u'){
			return(1); // Verdadero
	}else{
			return(0); // Falso
	}
}

int esConsonante(char a){

		if(a =='B' || a =='b' || a =='C' || a =='c' || a =='D' || a =='d' || a =='F' || a =='f' || a =='G' || a =='g' || a =='H' || a =='h'
			|| a =='J' || a =='j' || a =='K' || a =='k' || a =='L' || a =='l' || a =='M' || a =='m' || a =='N'|| a =='n' || a =='P' || a =='p'
			|| a =='Q' || a =='q' || a =='R' || a =='r' || a =='S' || a =='s' || a =='T' || a =='t' || a =='V' || a =='v' || a =='W' || a =='w'
			|| a =='X' || a =='x' || a =='Y' || a =='y' || a =='Z' || a =='z'){
		   	
					return(1); // 1 = Verdadero
		}else{
		   			return(0); // 0 = Falso
		}
}
	
 
