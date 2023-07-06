// programa que calcula el cuadrado y el cubo de los numero 1 a 10

#include <iostream>
#include <iomanip> // biblioteca que permite usar la funcion setw(int)

using namespace std;

int main (){
	
	cout << "NUMERO   CUADRADO   CUBO\n"
		 << "------   --------   ----\n";
		
		int i = 1; 
		 while (i <= 10){
		 	
		 	cout << setw (3) << i << "       "
			 	 << setw (3) << i * i << "       "
			 	 << setw (4) << i * i * i << endl;
			i++;	
		}
	return 0;
}
