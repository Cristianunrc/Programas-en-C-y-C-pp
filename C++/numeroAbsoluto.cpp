// programa que calcula el valor absoluto de un numero

#include <iostream>

using namespace std; // esta linea por defecto

float abs (float);

int main (){
	
	float num, resultado;
	
	cout << "Ingrese un numero: ";
	cin >> num;
	
	resultado = abs (num);
	
	cout << "Absoluto: "<< resultado << endl;	
	return 0;
}

float abs (float num) {
	
	if (num < 0){
		return (-1 * num); // si el numero es negativo entonces se multiplica por -1 y se obtiene un numero positivo
	}
	else{
		return (num);
	}	

}
