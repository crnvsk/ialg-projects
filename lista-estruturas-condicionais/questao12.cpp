#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int coefA, coefB, coefC, raiz1, raiz2, delta;
	
	cin >> coefA;
	cin >> coefB;
	cin >> coefC;
	
	delta = (coefB * coefB) - (4 * coefA * coefC);
	
	if(delta > 0){
		raiz1 = (-(coefB) - sqrt(delta)) / (2 * coefA);
		raiz2 = (-(coefB) + sqrt(delta)) / (2 * coefA);
		
		cout << raiz1 << " " << raiz2;
	}
	if(delta < 0){
		cout << "nenhuma raiz";
	}
	return 0;
}

