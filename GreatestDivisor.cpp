#include <iostream>

using namespace std;

int main (int argc, char * const argv[]) {
    
	int num;	 // Entrada int>1
	int divisor; // Sortida
	int i;		 // Auxiliar
	
	cout << "INTRODUEIX EL NUMERO: " << endl;
	cin >> num;
	
	for (i=1;i<=num/2;i++) {		//El divisor mes gran es troba en l'interval entre 1 i n/2
		
		if (num%i==0) divisor=i;	//Guarda el divisor actual, al final del recorregut sera el mes gran
	
	}
	
	cout << "EL SEU DIVISOR MES GRAN ES EL " << divisor << endl;
    
	return 0;
}
