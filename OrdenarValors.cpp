#include <iostream>

using namespace std;

int main () {
	int val1, val2, val3, aux1, aux2;
	cout << "INTRODUEIX VALOR 1:" << endl;
	cin >> val1;
	cout << "INTRODUEIX VALOR 2:" << endl;
	cin >> val2;
	cout << "INTRODUEIX VALOR 3:" << endl;
	cin >> val3;
	
		if (val1>val2) {
			aux1=val1;
			val1=val2;
		}
		else aux1=val2;
	
		if (val1>val3) {
			aux2=val1;
			val1=val3;
		}
		else aux2=val3;
	
		if (aux1>=aux2) { val2=aux2;val3=aux1;}
		else if (aux2>aux1) {val2=aux1;val3=aux2;}
	
	cout << "EL RESULTAT ES:\n" << val1 <<", " << val2 << ", " << val3 << "," << endl;
    return 0;
}
