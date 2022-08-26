#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	unsigned int numero;
	double resultado, rad, angulo1, angulo2;
	
	cin >> numero;
	
	if(numero == 3){
		cin >> angulo1 >> angulo2;
		resultado = angulo1 * angulo2;
		cout << resultado;
	}
	if(numero == 1){
		cin >> angulo1;
		rad = angulo1 * (M_PI/180.0);
		resultado = sin(rad);
		cout << resultado;
	}
	if(numero == 2){
		cin >> angulo1;
		rad = angulo1 * (M_PI/180.0);
		resultado = cos(rad);
		cout << resultado;
	}
	return 0;
}

