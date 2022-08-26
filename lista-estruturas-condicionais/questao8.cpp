#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string cor1, cor2, azul, amarelo, vermelho;
	
	cin >> cor1 >> cor2;
	
	azul = "azul";
	amarelo = "amarelo";
	vermelho = "vermelho";
	
	if(cor1 == cor2 or cor2 == cor1){
		cout << cor1;
	} 
	if((cor1 == azul and cor2 == amarelo) or (cor1 == amarelo and cor2 == azul)){
		cout << "verde";
	}
	if((cor1 == azul and cor2 == vermelho) or (cor1 == vermelho and cor2 == azul)){
		cout << "violeta";
	}
	if((cor1 == vermelho and cor2 == amarelo) or (cor1 == amarelo and cor2 == vermelho)){
		cout << "laranja";
	}
	return 0;
}
