/*
	Grupo 33
	Integrantes: Picca, Bautista
				Herrera, Cristian
				Sabarini, Francesco
*/
#include<stdio.h>
#include<string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h> 

typedef struct{
	int dni;
	int clave;
	float saldo;
	float montoMax;
}TTarjeta;

TTarjeta t1,t2,t3,t4;
TTarjeta tarjeta;

int operacion, dni, clave, finalizar;

void cargarTarjetas(TTarjeta * tarj1, TTarjeta * tarj2, TTarjeta * tarj3, TTarjeta * tarj4); // se cargan las 4 tarjetas con sus respectivos campos

void agregarTarjeta(int dni, int clave, float saldo, float montMax, TTarjeta * tarjeta); // accion que se utiliza dentro de accion cargarTarjetas

void ingresar(int * dni, int * clave); // se ingresan dni y clave de la tarjeta

void verificarDatosIngreso(int dni, int clave, int * datosOk, TTarjeta * tarjeta); // se compara dni y clave ingresados con cada dni y clave de las 4 tarjetas

bool tarjetaCorrecta(int dni, int clave, TTarjeta tarj); // funcion que se utiliza dentro de accion grabarDatosEnTarjeta y verificarDatosIngreso 

void solicitarOperacion(int * op); 

void realizarOperacion(int op, TTarjeta * tarj); // se realiza el bloque de codigo de cada una de las cinco operaciones

void grabarDatosEnTarjeta(TTarjeta * tarj); // accion que se utiliza dentro de la accion realizarOperacion

int main(){

	int datoOk = 0;
	// Invoco acciones en algoritmo principal
	cargarTarjetas(&t1,&t2,&t3,&t4);
	ingresar(&dni,&clave);
	verificarDatosIngreso(dni, clave, &datoOk, &tarjeta);
	if (datoOk == 1){ 
		finalizar = 0;
		while (finalizar == 0){
			solicitarOperacion(&operacion);
			realizarOperacion(operacion, &tarjeta);
		}
	}
	else{ 
		finalizar = 0;
	}
	return (0);	
}

void cargarTarjetas(TTarjeta * tarj1, TTarjeta * tarj2, TTarjeta * tarj3, TTarjeta * tarj4){
	// Carga las 4 tarjetas
	agregarTarjeta(23225226, 1547, 5800, 5000, tarj1);
	agregarTarjeta(28228331, 5389, 10000, 7000, tarj2);
	agregarTarjeta(30456189, 2389, 25000, 10000, tarj3);
	agregarTarjeta(35283281, 2984, 87990, 10000, tarj4);
}

void agregarTarjeta(int dni, int clave, float saldo, float montoMax, TTarjeta * tarjeta){
    tarjeta->dni = dni;
    tarjeta->clave = clave;
    tarjeta->saldo = saldo;
    tarjeta->montoMax = montoMax;
}

void ingresar(int * dni, int * clave){
	printf("Ingrese su DNI:");
	scanf("%d",dni);
	printf("Ingrese su clave:");
	scanf("%d",clave);
}

void verificarDatosIngreso(int dni, int clave, int * datosOk, TTarjeta * tarj){

    if(tarjetaCorrecta(dni, clave, t1)) {
        *datosOk = 1;
        *tarj = t1;
    }
    if(tarjetaCorrecta(dni, clave, t2)) {
        *datosOk = 1;
        *tarj = t2;
    }
    if(tarjetaCorrecta(dni, clave, t3)) {
        *datosOk = 1;
        *tarj = t3;
    }
    if(tarjetaCorrecta(dni, clave, t4)) {
        *datosOk = 1;
        *tarj = t4;
    }

	if(*datosOk == 0){
		printf("Dni y clave ingresados incorrectos");
	}else{
		printf("Dni y clave ingresados correctos\n");
	}	
}

// compara el dni y clave con una tarjeta ingresada, si los datos coinciden con
// los de una tarjeta almacenada, retorna verdadero.
bool tarjetaCorrecta(int dni, int clave, TTarjeta tarj){
    return (dni == tarj.dni && clave == tarj.clave);
}
	
void solicitarOperacion(int * op){
	printf("#####Ingrese la operacion que desea realizar#####\n");
	printf("1_Consultar saldo y limite de extraccion\n");
	printf("2_Extraer dinero\n");
	printf("3_Actualizar clave\n");
	printf("4_Modificar limite de extraccion\n");
	printf("5_Finalizar\n");
	scanf("%d",op);
}

// accion que compara el dni y clave de la tarjeta seleccionada con las
// almacenadas y actualiza los datos de la misma.
void grabarDatosEnTarjeta(TTarjeta * tarj){
    if(tarjetaCorrecta(tarj->dni, tarj->clave, t1)){
        t1 = *tarj;
    }
    if(tarjetaCorrecta(tarj->dni, tarj->clave, t2)){
        t2 = *tarj;
    }
    if(tarjetaCorrecta(tarj->dni, tarj->clave, t3)){
        t3 = *tarj;
	}
    if(tarjetaCorrecta(tarj->dni, tarj->clave, t4)){
        t4 = *tarj;
    }
    
}

void realizarOperacion(int op, TTarjeta * tarj){
	
	switch(op){
		
	  	 case 1:
	    	// Opcion 1 -> Consultar saldo y limite de extraccion
	    	printf("Saldo: $%2.f Monto maximo: $%2.f \n",tarj->saldo,tarj->montoMax); 
	    	break;
	    
	    case 2: ;
	    // Opcion 2 -> Extraer dinero
	    float monto; // se solicita monto a extraer
	        printf("Ingrese el monto que desea retirar. Dinero en su cuenta: $%2.f) \n", tarj->montoMax);
	        scanf("%f", &monto);
	        if((monto >= 0) && (monto <= tarj->saldo) && (monto <= tarj->montoMax)) {
	            tarj->saldo = tarj->saldo - monto;
	            printf("La extraccion ha sido exitosa. Su saldo en la cuenta es: %f\n",tarj->saldo);
	            grabarDatosEnTarjeta (tarj);
	        } else {
	            printf("El monto que introdujo no es valido!\n");
	        }
	       break;
	    
	    case 3: ;
	    // Opcion 3 -> Actualizar clave
	    int claveAuxiliar0, claveAuxiliar1; // variable donde almaceno la nueva clave
	    	printf("Ingrese la nueva clave: \n");
	    	scanf("%d",&claveAuxiliar0);
	    	printf("Confirme la clave ingresandola nuevamente: \n");
	    	scanf("%d",&claveAuxiliar1);
	    	
	    	while (claveAuxiliar0 != claveAuxiliar1){
	    			printf("La segunda confirmacion de clave es distinta a la primera.\nVuelva a ingresarla por favor.");
	    			scanf("%d",&claveAuxiliar1);
		    }
			
			if((claveAuxiliar1 == claveAuxiliar0) && (floor(log10(abs(claveAuxiliar0))) + 1) == 4){
	    	    tarj->clave = claveAuxiliar0;
	    	    printf("La clave ha sido actualizado exitosamente, su nueva clave es: %d\n", tarj->clave);
	    	    grabarDatosEnTarjeta (tarj);
	        }
	        break;
	    
	    case 4: ;
	    // Opcion 4 -> Modificar limite de extraccion
	    float montoMax1;
	        printf("Ingrese el monto maximo a extraer, debe ser mayor o igual a $500: ");
	        scanf("%.2f", &montoMax1);
	        if(montoMax1 >= 500){
	            tarj->montoMax = montoMax1;
	            printf("El monto maximo se actualizo exitosamente a $%f\n",tarj->montoMax);
	            grabarDatosEnTarjeta (tarj);
	        } else{
	            printf("El monto maximo no cumple con los requerimientos, no se actualizo el monto\n");
	        }
	        break;
	    
	    case 5:
		// Opcion 5 -> Finalizar operaciones
		 	finalizar = 1;
	        printf("Operacion finalizada.");
	        break;
	    default:
	        printf("La operacion solicitada no existe.");
	}
}
