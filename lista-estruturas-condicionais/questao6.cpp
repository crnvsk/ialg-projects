#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string cor1, cor2;
	int numero, n1, n2, n3, n4, n5, n6;
	
	cin >> cor1;
	cin >> cor2;
	cin >> numero;
	
	n1 = numero / 100000;
	n2 = (numero / 10000) % 10;
	n3 = (numero / 1000) % 10;
	n4 = (numero / 100) % 10;
	n5 = (numero / 10) % 10;
	n6 = numero % 10;
	
	if(n1 == n6 and n2 == n5 and n3 == n4){
		cout << cor1;
	}
	else{
		cout << cor2;
	}

	return 0;
}
