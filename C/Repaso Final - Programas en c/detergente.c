#include <stdio.h>


int main () {
	
	int bidon = 60000;
	float cantEnv, capEnv, deterSobrante; // cantEnv (cantidad de envases), capEnv (capacidad del envase), deterSobrante (detergente que sobro en ml)
	
	printf ("Un bidon de detergente tiene 60 mil mililitros de detergente, se lo quiere fraccionar en envases mas chicos con la misma cantidad de detergente cada envase.\n");
	printf ("Indique la cantidad de envases a utilizar: ");
	scanf ("%f",&cantEnv); 
	printf ("Indique la capacidad (ml) de cada uno de los envases: ");
	scanf ("%f",&capEnv);

 	while (cantEnv * capEnv > bidon){
		printf("Datos ingresados incorrectos, vuelva a ingresar los datos.\n");
		printf ("Cantidad de envases a utilizar: ");
		scanf("%f",&cantEnv); 
		printf ("Capacidad (ml) de cada uno de los envases: ");
		scanf("%f",&capEnv);
	}
	 	
	if (cantEnv * capEnv < bidon){
		deterSobrante = bidon - (cantEnv * capEnv);
		printf ("La cantidad de detergente que sobro (ml) es: %.2f",deterSobrante);
	}
	else{
		printf("No sobro detergente.");
	}
	
	return 0;
}
