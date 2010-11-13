#include <iostream>

using namespace std;

bool esPrimer (int n) {  // Esbrina si l'entrada es un nombre primer
/**
 {PRE: n>0 }
 {POST: retorna boolea (si es primer=cert, sino fals }
**/
	
	int d=2; // Variable auxiliar
	while (n%d!=0) {
	d=d+1;
	}
	if (d==n) return true;
	else return false;

}


int main (int argc, char * const argv[]) {
	
	int n; // Entrada
	int primers; // Sortida
	int contador; // Variable auxiliar
	
	
/**
	 
{PRE: n>0 }
{POST: retorna els n primers nombres primers}
 
**/
	
	
	cout << "INTRODUEIX VALOR: " << endl;
	cin >> n;
	
	cout << "ELS " << n <<" PRIMERS NOMBRES PRIMERS SON: "<<endl;
	contador=0;
	primers=2; // inicialitzem la variable primers a el primer numero primer (2)
	
	while (contador<n) {
		if (esPrimer(primers)) {
			contador++;
			cout << primers <<endl;
		}
		primers++;
	}
	
		
    return 0;
}

