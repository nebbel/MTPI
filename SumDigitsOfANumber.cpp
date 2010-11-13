#include <iostream>

using namespace std;

int main (int argc, char * const argv[]) {
	
	int div; // Entrada
	int res; // Sortida
	
	cout << "INTRODUEIX UN NUMERO: " << endl;
	cin >> div;
	res=0;
	
		while (div!=0) {     
			
			res=res+div%10;  
			div=div/10;		 
			
		
		}
	
	
	cout << "LA SUMA DELS DIGITS VAL: " << res << endl;
	
    return 0;
}
