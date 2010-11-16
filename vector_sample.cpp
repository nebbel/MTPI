#include <iostream>
using namespace std;
int main(){

	int vector[9];
	for (int i=0;i<=9;i++){
		cin >> vector[i];
	}
	
	for (int i=9;i>=0;i--){
		cout << vector[i]<<",";
	}




	return 0;
}