#include <iostream>
using namespace std;

int sumaDivisors (int a) {
//{PRE: Entrada: enter>0}    
//{POST: Sortida: suma dels divisors de a}	
	
	int suma=0; // Sortida
	int i;		// Auxiliar
	
	for (i=1;i<=a/2;i++) {		
		if (a%i==0) suma=suma+i;			
	}
	return suma;
}

bool sonAmics(int a,int b) {
//{PRE: Entrada: a,b: enters}
//{POST: Sortida: amics cert si son amics, sino fals}	
	
	bool amics; // Sortida
	amics=false;
	if ((sumaDivisors(a)==b)&&(sumaDivisors(b)==a)) amics=true;
	
	
	return amics;
}

const int MARCA_FI=-1; // Marca de fi

int main (int argc, char * const argv[]) {
    
	//Declaracio de variables
	int a; //Entrada
	int aux; //Auxiliar (element anterior)
	int parelles; //Sortida
	
	//{PRE: Entrada: parelles de nombres enters }
	//{POST: Nombre de parelles de nombres que son amics}
	
	cout << "DADES: "<<endl;
	cin >> a;
	aux=a;
	parelles=0;
	
	while (a!=MARCA_FI) { // Recorregut
		cin >> a;
		if (sonAmics(a,aux)) parelles=parelles+1;
		aux=a;
	}
	cout << "HEM TROBAT "<< parelles<<" PARELLES DE NOMBRES AMICS."<<endl;
    
	return 0;
}
