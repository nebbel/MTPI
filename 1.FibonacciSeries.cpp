#include <iostream>

using namespace std;

int main (int argc, char * const argv[]) {
    
	int a,b,n; // Entrada
	int nou;   // Sortida
	a=0;  // Inicialitzem a i b 
	b=1;
	
	cout << "INTRODUEIX UN NUMERO: " << endl;
	cin >> n;
	
	if (n==1) cout << "LA SERIE DE FIBONACCI:\n0, ";  // Separem ell cas especial de que es demani un sol numero de la serie
	
	else {											  // de la resta del codi
	
	nou=0;
	
	cout << "LA SERIE DE FIBONACCI:\n0, 1, "; //El 0 i l'1 els posem directament
	
	while ((nou+a)<n) { //Va creant el numero seguent de la serie mentre aquest sigui mes petit que el seguent "nou", es a dir nou+a
	
		nou=a+b;
		a=b;
		b=nou;
	
		cout << nou << ", "; 	
	
	}
	
	}	
    return 0;
}
