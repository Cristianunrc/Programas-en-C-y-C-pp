#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main (){
	
	int x, y;
	
	cout << "valor x   valor y\n";
	cout << "-----     -------\n";
	
	x = 2;
	while (x <= 6){
		
		y = 10 * pow (x, 2) + 3 * (x - 2);
		
		cout << setw (4) << x
			 << setw (11) << y << endl;
	
		x++;	
	}
	
	return 0;
}
