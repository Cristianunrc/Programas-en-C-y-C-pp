// programa que convierte una temperatura ingresada en grados Fahrenheit a grados Celcius
#include <iostream>

using namespace std;

double convertir_temperatura (double);

int main (){
	
	int i;
	double fahren, conver;
	
	for (i = 1; i <= 4; i++){
		cout << "\nIntroduzca una temperatura en grados FAHRENHEIT:  ";
		cin >> fahren;
		
		conver = convertir_temperatura (fahren);
		
		cout << "En grados CELCIUS es :  " << conver << endl;
	}
	
	return 0;
}

// funcion que convierte g f a g c
double convertir_temperatura (double fahren){
	
	return ((5.0 / 9.0) * (fahren - 32.0));
}
