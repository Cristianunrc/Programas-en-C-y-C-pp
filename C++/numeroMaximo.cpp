//Programa que calcula el maximo entre dos numeros ingresados
#include <iostream>

using namespace std;

int encontrarMaximo (int, int);

int main (){
	
	int num1, num2, numMax;
	
	cout << "Ingrese el primer numero: ";
	cin >> num1;
	
	cout << "Ahora ingrese el segundo numero: ";
	cin >> num2;
	
	numMax = encontrarMaximo (num1, num2); // invoco la accion en main con sus parametros actuales
	
	cout << "El mayor numero es: " << numMax << endl;
	
	return 0;
}

// desarrollo de la funcion encontrarMaximo

int encontrarMaximo (int x, int y){
	
	if (x >= y){
		return x;
	}
	else{ // x < y
		return y;
	}
	
}
