//Algorisme per convertir un digit hexadecimal a binari
//falla quan hi ha zeros en el numero la conversio fa

#include <iostream>
using namespace std;

int dec2bin(int num){
//{PRE: Entrada enter>0 }
//{POST: Sortida enter convertit a binari}

	//Declaracio de variables
	int final_binari; 	//Sortida
	int residu=0;		//Auxiliar
	int contador=1;		//Auxiliar
	
	while(num!=1){
		residu=residu+(num%2)*contador;
		contador=contador*10;
		num=num/2;	
	}
	
	final_binari=residu+num*contador;
	return final_binari;
}

int hex2dec(char numhex){
//{PRE: Entrada cadena de caracters acabada en . valors entre 0-9 i A-F (en majuscula!)}
//{POST: Sortida la conversio a decimal (enter)}

	//Declaracio de variables
	int numdec;		//Sortida	
		
		if ((numhex>='0')&&(numhex<='9')){
			numdec=numhex-48;
		} else numdec=numhex-55;	
	
	return numdec;
}



int main(){
	
	//Declaracio de variables
	char num;
	
	//{PRE: Entrada cadena de caracters (nombres 0-9, lletres A-F)}
	//{POST: Sortida digit enter, conversio a binari}
	
	cout << "Entra un digit en hexadecimal (0-F),acabat en . "<<endl;
	cin >> num;	
		
	while (num!='.'){
		if (hex2dec(num)==0) cout <<"0"<<endl;	
		else cout << dec2bin(hex2dec(num))<<endl;
		cin >> num;
	}	
	return 0;
}