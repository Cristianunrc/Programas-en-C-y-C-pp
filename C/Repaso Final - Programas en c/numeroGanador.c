/*
	Programa que dado un numero ganador y un numero dice si salió el numero ganador y sino lo dice tambien. En ambos casos pregunta si quiere volver a jugar. 

*/

#include <stdio.h>

int num, numGanador;
char resp;

int main (){
	
	do {
		printf("Indique el numero ganador: ");
		scanf("%d",&numGanador);
		printf("Inidique su numero: ");
		scanf("%d",&num);
		
		if (num == numGanador){
			printf("Usted Gano.\n Desea volver a jugar, S (Si) o N (No): ");
			scanf(" %c",&resp);
		}
		else{
			printf("Usted No Gano.\n Desea volver a jugar, S (Si) o N (No): ");
			scanf(" %c",&resp);		
		}
		
	} while (resp != 'N');
}
