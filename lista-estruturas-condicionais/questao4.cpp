#include <iostream>

using namespace std;

int main(){
	
	float n1, n2 , n3, n4, aux, soma;
	
	cin >> n1 >> n2 >> n3 >> n4;
	
	if(n2 > n1){ 	// se 4.6 > 3.4
		aux = n1; 	// aux = 3.4
		n1 = n2;	// n1 = 4.6
		n2 = aux;	// n2 = 3.4
	}
	if(n3 > n1){	// se 7.0 > 3.4
		aux = n1;	// aux = 3.4
		n1 = n3;	// n1 = 7.0
		n3 = aux;	// n3 = 3.4
	}
	if(n4 > n1){	// se 1.8 > 3.4
		aux = n1;	// aux = 3.4
		n1 = n4;	// n1 = 1.8
		n3 = aux;	// n3 = 3.4
	}
	if(n3 > n2){	// se 7.0 > 4.6
		aux = n2;	// aux = 4.6
		n2 = n3;	// n2 = 7.0
		n3 = aux;	// n3 = 4.6
	}
	if(n4 > n2){	// se 1.8 > 4.6
		aux = n2;	// aux = 4.6
		n2 = n4;	// n2 = 1.8
		n4 = aux;	// n4 = 4.6
	}
	if(n4 > n3){	// se 1.8 > 7.0
		aux = n3;	// aux = 7.0
		n3 = n4;	// n3 = 1.8
		n4 = aux;	// n4 = 7.0
	}
		soma = n1 + n2 + n3;
		cout << soma << endl;
	
	return 0;
}

