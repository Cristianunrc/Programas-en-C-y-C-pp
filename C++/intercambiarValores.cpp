//programa que intercambia los valores ingresados

#include <iostream>

using namespace std;

void intercambiar (int&, int&);

int main (){
	int a, b;
	
	cout << "Ingrese el primer numero: ";
	cin >> a;
	cout << "Ingrese el segundo numero: ";
	cin >> b;
	
	intercambiar (a, b);
	
	return 0;
}

void intercambiar (int& a, int& b){ // parametros de dato- resultado o referencia
	int aux;
	
	aux = b;
	b = a;
	a = aux;
	
	cout << "\nValor del primer numero: "<< a << endl; 
	cout << "Valor del segundo numero: "<< b << endl;
}
