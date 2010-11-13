#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>

using namespace std;


int main (int argc, char * const argv[]) {
	double n,actual,total;
	int grau,precisio;
	cout << "||APROXIMACIO PER POLINOMIS DE TAYLOR DE LA FUNCIO ln(1+x)||\n"<<endl;
	precisio=31;
	while (precisio>30) {
	
	cout << "INTRODUEIX EL NOMBRE MAXIM DE DECIMALS A MOSTRAR A LA SORTIDA: "<<endl;
	cin >> precisio;
		if (precisio>20) cout <<"NO ES PODEN MOSTRAR MES DE 30 XIFRES DECIMALS!"<<endl;
	
	}
	
	
	cout << "INTRODUEIX EL VALOR DE X: "<<endl;
	cin >> n;
	cout << "INTRODUEIX L'ORDRE DEL POLINOMI DE TAYLOR A UTILITZAR: "<<endl;
	cin >> grau;
	total=0;
	for (int i=1;i<=grau;i++) {
	actual=(pow(n,i))/i;
		
		if (i%2==0) total=total-actual;
		else  total=total+actual;
		
	
	
	}
	
	cout<< setprecision(precisio) << "APROXIMACIO DE TAYLOR DE GRAU "<<grau<<": " << total<<endl;
	
    return 0;
}
