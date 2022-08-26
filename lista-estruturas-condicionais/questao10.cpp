#include <iostream>

using namespace std;

int main(){
	
	float numero, num1, num2, resultado, aux;
	
	cin >> num1;
	cin >> num2;
	cin >> numero;
	
	if(num1 < num2){
		aux = num2;
		num2 = num1;
		num1 = aux;
	}
	if(numero < 1 or numero > 4){
		cout << "ERRO";
	}
	if(numero == 1){
		resultado = (num1 + num2)/2;
		cout << resultado;
	}
	if(numero == 2){
		resultado = num1 - num2;
		cout << resultado;
	}
	if(numero == 3){
		resultado = num1 * num2;
		cout << resultado;
	}
	if(numero == 4 and num2 != 0){
		resultado = num1 / num2;
		cout << resultado;
	}
	if(numero == 4 and num2 == 0){
		cout << "ERRO";
	}
	return 0;
}

