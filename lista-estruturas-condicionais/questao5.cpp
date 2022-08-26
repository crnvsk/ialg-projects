#include <iostream>
using namespace std;

int main(){
	
	int codProduto, codPais;
	float pesoKG, pesoG, precoBruto, imposto, precoTotal;
	
	cin >> codProduto;
	cin >> pesoKG;
	cin >> codPais;
	
	pesoG = pesoKG * 1000;
	
	cout << pesoG << endl;
	
	if(codProduto >= 1 and codProduto <= 4){
		precoBruto = pesoG * 10;
	}
	else if(codProduto >= 5 and codProduto <= 7){
		precoBruto = pesoG * 25;
	}
	else if(codProduto >= 8 and codProduto <= 10){
		precoBruto = pesoG * 35;
	}
	
	cout << precoBruto << endl;
	
	if(codPais == 1){
		imposto = precoBruto * 0;
	}
	else if(codPais == 2){
		imposto = precoBruto * 0.15;
	}
	else if(codPais == 3){
		imposto = precoBruto * 0.25;
	}
	
	cout << imposto << endl;
	
	precoTotal = precoBruto + imposto;
	
	cout << precoTotal;
	
    
    return 0;
}
