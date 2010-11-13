#include <iostream>

using namespace std;

int sumaFilas (int a,int b) { 
/**

 {PRE: a>-1, b>-1}
 {POST: multiplica pas a pas fent servir el metode de la multiplicacio russa, als passos on (a=imparell) mostra la variable suma}
 
**/
	
	
	int suma; // Sortida
	
	
	if ((a==0)||(b==0)) suma=0; // Si a=0 o b=0 assignem el 0 directament a la variable suma i ens saltem la resta del proces
	
	else {
		
		cout << a << " " << b; // Escriu a i b inicials
	
		if (a%2!=0) {		// Si la primera a no es parell, inicialitza suma=b i mostra el primer valor a sumar
			suma=b;
			cout <<" "<<suma<<endl;
		} else {			// En cas contrari inicialitza suma=0 i fa un salt de linia
			suma=0;
			cout << endl;
			}
	
		while (a>1) {  // Ja tenim la primera linea escrita, ara mentre no arribem a a=1 farem
			
			a=a/2;  // fem divisio entera de a entre 2
			b=b*2;  // multipliquem b per 2
		
			cout << a << " " << b <<" "; // Mostrem a cada pas els nous a i b

			if (a%2!=0) {  // Si resulta que en el pas actual a no es parell, acumulem b en la variable suma i mostrem el valor al costat
				suma=suma+b;
				cout <<suma<<endl;
			} else cout <<endl; // En cas de que a no sigui parell fem tan sols un salt de linia
			}
		}
	
		cout << "RESULTAT: "<<endl;
	
		return suma;
}

int main (int argc, char * const argv[]) {
  
	int a,b;   // Entrada
	
/**
	 
{PRE: a>-1, b>-1}
{POST: retorna sumaFilas(a,b)}
	 
**/
	
	cout << "ENTRA NUMERO: "<<endl; // Assignem valor a "a" i "b"
	cin >> a;
	cout << "ENTRA NUMERO: "<<endl;
	cin >> b;
	
	cout << "CALCULANT: "<<endl;
	cout << a << " X " << b << " = " << sumaFilas(a,b);  // Li passem a i b a la funcio sumaFilas que es la que s'encarrega de tot el proces.
	
	
	
    return 0;
}
