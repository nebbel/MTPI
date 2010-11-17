#include <iostream>
using namespace std;

char passaBlancs(char entrada){
//{PRE: }
//{POST:}
	
	//Declaracio de variables
	char sortida;
	
	if (entrada!=' ') {
		sortida=entrada;
	
	} else { sortida=31; //l'espai es ascii32, sortida=32-desplaçament!
		}
	
	
return sortida;
	
}

char codificar(char entrada){
//{PRE: }
//{POST:}	
	
	//Declaracio de variables
	char sortida;
	
	sortida=entrada+1;//*desp
	return sortida;
	
}

int main (int argc, char * const argv[]) {
	
	//Declaracio de variables
	char seq;
	char sortida;
	
	//{PRE: }
	//{POST: }
	cout << "INTRODUEIX LA SEQUENCIA: "<<endl;
	seq=cin.get();
	cout << "EL RESULTAT ES: "<<endl;
	while (seq!='#'){
		sortida=codificar(passaBlancs(seq));
		cout << sortida;
		
		seq=cin.get();
		
	}
	
	cout <<"#";

    return 0;
}
