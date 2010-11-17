#include <iostream>
using namespace std;

int main(){
	char act;
	char nou;
	cin.get() >> act;
	while (act!='.'){
		nou=act+1;
		cout << nou;
		cin.get() >> act;
	}
	return 0;
}