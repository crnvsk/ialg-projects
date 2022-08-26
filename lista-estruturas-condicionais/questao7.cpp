#include <iostream>

using namespace std;

int main(){
	
	 int numero, pares, impares;
	
	cin >> numero;
	
	pares = 0;
	impares = 0;
	
	if(numero % 2 == 0){
		pares++;
	}
	else{
		impares++;
	}
	
	numero = numero/10;
	
	if(numero % 2 == 0){
		pares++;
	}
	else{
		impares++;
	}
	
	numero = numero/10;
	
	if(numero % 2 == 0){
		pares++;
	}
	else{
		impares++;
	}
	
	numero = numero/10;
	
	if(numero % 2 == 0){
		pares++;
	}
	else{
		impares++;
	}
	
	numero = numero/10;
	
	if(numero % 2 == 0){
		pares++;
	}
	else{
		impares++;
	}
	
	cout << pares << endl << impares;
	return 0;
}

