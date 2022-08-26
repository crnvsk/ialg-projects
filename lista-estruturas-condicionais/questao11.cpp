#include <iostream>

using namespace std;

int main(){

	int matricula, nota, presenca, n1, n2, n3, n4, n5, n6, n7, n8, n9;
	
	cin >> matricula;
	cin >> nota;
	cin >> presenca;
	
	n1 =  matricula / 100000000;
	n2 = (matricula /10000000) % 10;
	n3 = (matricula /1000000) % 10;
	n4 = (matricula /100000) % 10;
	n5 = (matricula /10000) % 10;
	n6 = (matricula /1000) % 10;
	n7 = (matricula /100) % 10;
	n8 = (matricula /10) % 10;
	n9 =  matricula % 10;
	
	if((nota >= 60 and presenca >=75) or (nota >=70 and presenca >=65)){
		cout << n5 << n6 << n7 << n8 << n9 << "A";
	}
	else{
		cout << n5 << n6 << n7 << n8 << n9 << "R";
	}
	return 0;
}
