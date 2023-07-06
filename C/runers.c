// En una carrera de 100 metros compiten tres corredores. Al llegar a la meta se toman los tiempos de cada uno, en segundos. 
//	Los tiempos son distintos entre sí, es decir, no hay empate. Luego, la mesa de control informa los tiempos, ordenados de menor a mayor. 
// ¿Puedes colaborar con la mesa de control ordenando los tiempos que recibe para informarlos en orden creciente?

#include 

float c1,c2,c3; // variables globales, corredor 1, corredor 2, corredor 3.

void competicion(float t1, float t2, float t3);

void main(){
	competicion(c1,c2,c3);
}

void competicion(float t1, float t2, float t3){
	printf("Debera indicar los tiempos en segundos de las llegadas de cada corredor.\n");
	printf("Indique el tiempo del primer corredor: ");
	scanf("%f",&t1);
	printf("Indique el tiempo del segundo corredor: ");
	scanf("%f",&t2);
	printf("Inndique el tiempo del tercer corredor: ");
	scanf("%f",&t3);
	
	if(t1>t2 && t1>t3 && t2>t3){
		printf("Tiempos ordenados de menor a mayor: %.2f segundos, %.2f segundos, %.2f segundos",t3,t2,t1);
	}
	if(t1>t2 && t1>t3 && t3>t2){
		printf("Tiempos ordenados de menor a mayor: %.2f segundos, %.2f segundos, %.2f segundos",t2,t3,t1);
	}
	if(t2>t1 && t2>t3 && t1>t3){
		printf("Tiempos ordenados de menor a mayor: %.2f segundos, %.2f segundos, %.2f segundos",t3,t1,t2);	
	}
	if(t2>t1 && t2>t3 && t3>t1){
		printf("Tiempos ordenados de menor a mayor: %.2f segundos, %.2f segundos, %.2f segundos",t1,t3,t2);
	}
	if(t3>t1 && t3>t2 && t1>t2){
		printf("Tiempos ordenados de menor a mayor: %.2f segundos, %.2f segundos, %.2f segundos",t2,t1,t3);
	}
	if(t3>t1 && t3>t2 && t2>t1){
		printf("Tiempos ordenados de menor a mayor: %.2f segundos, %.2f segundos, %.2f segundos",t1,t2,t3);
	}

}
