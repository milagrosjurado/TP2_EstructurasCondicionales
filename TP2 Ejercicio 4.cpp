#include <iostream>
using namespace std;

int main() {
	double nota1, nota2, nota3, promedio;
	
	cout << "Ingrese la primeer nota:";
	cin >> nota1;
	cout << "Ingrese la segunda nota:";
	cin >> nota2;
	cout << "Ingrese la tercer nota:";
	cin >> nota3;
	
	promedio = (nota1 + nota2 + nota3) /3;
	
	if (promedio >=7) {
		cout << "TEA (Trayectoria Educativa Aprobada)." << endl;
	} else if (promedio >= 4){
	    cout << "TEP (Trayectoria Educativa en Proceso):" << endl;
	} else {
		cout << "TED (Trayectoria Educativa Descontinua)." << endl;
	}	
	
	return 0;
}
