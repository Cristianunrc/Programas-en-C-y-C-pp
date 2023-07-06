/* 	programa que muestra por pantalla tantos caracteres # como el valor del cociente de sus argumentos y tantos caracteres $ como 
 	el resto de la division.
 */
 
 #include <stdio.h>
 
 int x,y;
 
 void division (int m, int n);
 
 int main (){
 	printf ("Ingresar el dividendo: ");
 	scanf ("%d",&x);
 	printf ("Ingresar el divisor: ");
 	scanf ("%d",&y);
 	
 	division (x, y);
 	division (x + y, 2);
 	
 	return 0;
 }
 
 void division (int m, int n){
 	int q, r, i;
 	
 	q = (m / n);
 	r = m - q * n;
 	
 		for (i=1; i<=q; i++){
 			printf ("# ");
		}
		 
		for (i=1; i<=r; i++){
			printf("$ ");
		}
 }
