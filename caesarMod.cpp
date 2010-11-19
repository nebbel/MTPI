#include <iostream>
using namespace std;

void codificar(char &entra,int &desp_act, int &seg_desp, char &lletra1){
//{PRE: }
//{POST: }
	
	//Declaracio de variables
	char surt; //Carcater de sortida

	if (entra!=32) {			//Si entra caracter diferent d'espai
		surt=entra+desp_act;	//surt el caracter amb el desplaçament actual
		entra=cin.get();		//entra un nou caracter
		
		if (lletra1==entra) seg_desp=desp_act+1; //si el caracter nou=primera lletra incrementar seguent_desplaçament
		cout << surt;			//mostrem el caracter desplaçat
		
	} else {					//si entra un espai
		cout << entra;			//mostrem l'espai
		desp_act=seg_desp;		//el nou desplaçament sera el valor que hem anat incrementat si trobavem repeticions
		entra=cin.get();		//llegim el nou caracter
		lletra1=entra;			//assignem la primera lletra de la nova paraula a lletra1
		seg_desp=1;				//reiniciem a 1 el desplaçament a incrementar per la seguent paraula
		
	}	
}


int main(){
	
	//Declaracio de variables 
	char entra; //Caracter actual
	char lletra1;//Primera lletra paraula actual
	int desp_act=1;//desplaçament actual
	int seg_desp=1;//següent desplaçament
	
	//{PRE: }
	//{POST: }
	
	entra=cin.get();
	lletra1=entra;
	
	while (entra!='#'){
		codificar(entra,desp_act,seg_desp,lletra1);
	}
	
	return 0;
}