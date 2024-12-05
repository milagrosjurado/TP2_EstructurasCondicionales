#include <iostream>
using namespace std;

int main() {
	double num1, num2;
	
	cout << "Ingresar el valor del primer numero:";
	cin >> num1;
	cout << "Ingresar el valor del segundo numero:";
	cin >> num2;
	
	if (num1 > num2){
		cout << "Suma= " << num1 + num2 << endl;
		cout << "Diferencia= " << num1 - num2 << endl;
		} else {
		cout << "Producto= " << num1 * num2 << endl;
		cout << "Division= " << num1 / num2 << endl;
	}	
	
	return 0;
}
