#include <iostream>

using namespace std;

int main()
{
    int data,dia,mes,any; // la data s'entrara en el format ddmmaaaa
    cout << "INTRODUEIX LA DATA:" << endl;
    cin >> data; //llegim la data en el format indicat
    any=data%10000; //calculem l'any
	mes=(data/10000)%100; //calculem el mes
	dia=(data/1000000); //calculem el dia
	if (dia<1||dia>31||mes<1||mes>12||any<1600||any>3399) cout << "LA DATA ES INCORRECTA" << endl; //primer validem que la data donada no sigui "una bestiesa"
		else if (dia==31&&(mes==2||mes==4||mes==6||mes==9||mes==11)) cout << "LA DATA ES INCORRECTA" << endl; //validem que no sigui 31 en un mes on nomes hi ha 30 dies
		else if (dia==30&&mes==2) cout << "LA DATA ES INCORRECTA" << endl; // validem que no sigui dia 30 i febrer
		else if (dia==29&&mes==2 && !(any%4==0&&any%100!=0||any%400==0)) cout << "LA DATA ES INCORRECTA" << endl; //validem que no sigui 29 en un any on febrer nomes te 28 dies
		else cout << "LA DATA ES CORRECTA" << endl; //si passa les condicions anteriors la data ES correcta 
	
    return 0;
}