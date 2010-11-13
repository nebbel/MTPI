#include <iostream>

using namespace std;

int capgirar (int div) {
	/**
	 {PRE: div:enter }
	 {POST: retorna el nombre capgirat}
	 **/
	int res=0;	
	while (div!=0) {     
		res=res*10+div%10;  
		div=div/10;		 
		
	}
	return res;
}


int main() {
	
	int a,b; // Entrada
	
	/**
	 {PRE: a>0 b>0, a<b, interval(a,b) }
	 {POST: retorna els n}
	 **/
	
	cout << "ENTRAR NUMERO 1 :" << endl;
	cin >> a;
	int i=a; // Auxiliar
	cout << "ENTRAR NUMERO 2 :" << endl;
	cin >> b;
	
	cout << "CAPICUES ENTRE " << a << " I " << b << endl;
	while (i<=b) {
		
		if (capgirar(i)==i) cout << i << "\n";
		i++;
		
	}
	return 0;
	
}