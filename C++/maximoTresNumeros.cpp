#include <iostream>

using namespace std;

int maxTresNums (int, int, int);

int main (){
	
	int x, y, z, result;
	
	cout << "Primer numero: ";
	cin >> x;
	cout << "Segundo numero: ";
	cin >> y;
	cout << "Tercer numero: ";
	cin >> z;
	
	result = maxTresNums (x, y, z);
	
	cout <<"El maximo de los tres numeros es: "<< result << endl;
		
	return 0;
}


int maxTresNums (int x, int y, int z){
	
	if (x>= y && x >= z){
		return (x);
	}
	else{
		if(y >= x && y >=z){
			return (y);
		}
		else{ // el mayor es z
				return (z);
			}
		}
}

