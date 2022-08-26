#include <iostream>

using namespace std;

int main(){
	
		int dividendo, divisor, quociente, resto;
		
		cin >> dividendo;
		cin >> divisor;
		
		if(dividendo >= divisor and divisor != 0){
				quociente = dividendo / divisor;
				resto = dividendo % divisor;
				cout << quociente << endl << resto;
		}
		else{
			cout << "erro" << endl;
		}
	return 0;
}

