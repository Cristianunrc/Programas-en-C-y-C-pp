#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	
	int numMax, i = 0;
	double num, prom, total = 0;
	
	cout << "Indique la cantidad de numeros a ingresar: ";
	cin >> numMax;
	
	while (i < numMax){
		
		cout << "Numero: ";
		cin >> num;
		
		total = total + num;
		i++;
	}
	
	if (numMax <= 0) {
		cout << "Numero ingresado incorrecto";
	}
	else{
		prom = total / i; // la suma de los numeros dividido la cantidad
		cout << "El valor del promedio es: " << prom << endl;
	}
	
	return 0;
}
