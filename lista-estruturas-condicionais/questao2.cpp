#include <iostream>

using namespace std;

int main(){

	float matematica, natureza, linguagens, redacao, humanas, media;
	
	cin >> matematica >> natureza >> linguagens >> redacao >> humanas;
	
	if(redacao >= 200){
			media = ((matematica * 3) + (natureza * 2) + (linguagens * 2) + (redacao * 2) + (humanas * 1))/10;
			cout << media << endl;
	}
	else if(redacao < 200){
			cout << -1 << endl;
	}
	
	return 0;
}

