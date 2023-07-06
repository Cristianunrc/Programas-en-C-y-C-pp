// programa que te dice si un numero ingresado es par o impar

#include <iostream>

using namespace std;

void parONo (int);

int main (){
	
	int num;
	
	cout << "Ingrese un numero: ";
	cin >> num;
	
	parONo (num);
	
	return 0;
}

void parONo (int num){

	if (num % 2 == 0){ // el % es el mod, si el numero es par
		cout <<"El numero es par.";
	}
	else{ // el numero no es par
		cout << "El numero es impar.";
	}
}
