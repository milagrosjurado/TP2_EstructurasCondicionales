#include <iostream>
using namespace std;

int main() {
	double A, B, C, mayor, menor;
	
	cout << "Ingrese el valor de A:";
	cin >> A;
	cout << "Ingrese el valor de B:";
	cin >> B;
		cout << "Ingrese el valor de C:";
	cin >> C;
	if ((A==B) or (A==C) or (C==B)) {
		cout << "Ingrese valores distintos."; 
	} else {
		mayor = A;
		menor = A;
	
	if (B>mayor)  
		mayor = B;

	if (C>mayor) 
		mayor = C;
		
		if (B<menor)  
		menor = B;

	if (C<menor) 
		menor = C;
	
	
	cout << "El mayor es: " << mayor << endl;
	cout << "El menor es:" << menor << endl;
}
	
		return 0;
}
