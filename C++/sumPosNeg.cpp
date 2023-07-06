// Programa que realiza las sumas de numeros positivos por un lado y las sumas de numeros negativos por otro lado

#include <iostream>

using namespace std;

int main (){
	
	int num = 5;
	int i, numPosNeg, totalPos = 0, totalNeg = 0;
	
	for (i = 1; i <= num; i++){
		
		cout << "Digite un numero positivo o negativo: ";
		cin >> numPosNeg;
		
		if (numPosNeg >= 0){
			totalPos = totalPos + numPosNeg;
		}
		else{ // numPosNeg < 0
			totalNeg = totalNeg + numPosNeg;
		}
		
	}
	
	cout << "Suma de numeros positivos: " << totalPos << endl;
	cout << "Suma de numeros negativos: " << totalNeg << endl;
	
	return 0;
}
