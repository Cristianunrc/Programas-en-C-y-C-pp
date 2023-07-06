/*
	Juego Gane
*/
#include<stdio.h>

int num; // numero ingresado como entrada
int result; // almaceno la suma de num + 1
int cond; // 1 es 'S' (Si) y 0 es 'N' (No)
int i, var;
int main(){
	
	do{
		printf("Ingrese un numero: ");
		scanf("%d",&num);
		result = num + 1;
			printf("\nTE GANE!! El numero es: %d\n",result);
			printf("Quiere jugar otra vez?: ");
			printf("\nIngresar el 1 para volver a jugar\n0 para no jugar mas: ");
			scanf("%d",&cond);
				
				if(cond == 1){
					i=1;
					var=1;
				} else{
						i=0;
						var=0;
			    	}
					 
				} while((i==1) && (var==1));
		
	return 0;			
}				
