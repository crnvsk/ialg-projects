#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	float saldoMedio, credito;
	
	cin >> saldoMedio;
	
	if(saldoMedio <= 0){
			credito = 0;
			cout << saldoMedio << endl << credito << endl;
	}
	else if(saldoMedio >= 0 and saldoMedio < 200){
			credito = saldoMedio * 0.1;
			cout << saldoMedio << endl << credito << endl;
	}
	else if(saldoMedio >= 200 and saldoMedio < 400){
			credito = saldoMedio * 0.15;
			cout << saldoMedio << endl << credito << endl;
	}
	else if(saldoMedio >= 400 and saldoMedio < 800){
			credito = saldoMedio * 0.2;
			cout << saldoMedio << endl << credito << endl;
	}
	else if(saldoMedio >= 800 and saldoMedio < 1600){
			credito = saldoMedio * 0.25;
			cout << saldoMedio << endl << credito << endl;
	}
	else if(saldoMedio > 1600){
			credito = saldoMedio * 0.3;
			cout << saldoMedio << endl << credito << endl;
	}
	
	return 0;
}

