// programa que calcula la raiz cuadrada de los numeros 1,2,3,4 y 5

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main (){
	
	int cuentaMax = 5;
	int i;
	
	cout << "Numero  Raiz cuadrada\n";
	cout <<"-------  ------------\n";
	
	cout << setiosflags (ios :: showpoint); // setiosflags (ios :: dec) Establece los indicadores de formato especificado por el argumento.
											// showpoint incluye el punto decimal para salidas de punto flotante
	for (i = 1; i <= cuentaMax; i++){
		
		cout << setw (4) << i // setw (int) Establece el ancho del campo al número de caracteres especificados. Solo afecta a la salida siguiente.
			 <<	setw (15) << sqrt (double (i)) << endl; // Envía el carácter de nueva línea al flujo y limpia el buffer.
	}
	return 0;
}
