#include <iostream>

using namespace std;

int main (int argc, char * const argv[]) {
  
	int num,den;		// Entrada
	int aux;		// Auxiliar
	int fra1,fra2;	// Sortida
	
	cout << "INTRODUEIX EL NUMERADOR: " << endl;
	cin >> num;
	cout << "INTRODUEIX EL DENOMINADOR: " << endl;
	cin >> den;
	
	fra1=num; // Conservem els valors inicials del
	fra2=den; // numerador i denominador
	
		while (num%den!=0) {  // Busquem el maxim comu divisor amb el metode d'Euclides
			aux=den;
			den=num%den;
			num=aux;
		}
	
	fra1=fra1/den;  // Dividim tant el numerador com el denominador
	fra2=fra2/den;  // per el maxim comu divisor
	
	cout << "LA FRACCIO SIMPLIFICADA VAL " << fra1 << "/" << fra2 << endl;
	
    return 0;
}
