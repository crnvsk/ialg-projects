#include <iostream>

using namespace std;

int main(){

    char palavra[30], letra[1], oculta[30];
    int tamanho, i, chances, acertos, outro;
    bool acerto = false;


    chances = 5;
    tamanho = 0;
    i = 0;
    acerto = false;
    acertos = 0;

    cout << "Digite a palavra secreta: ";
    cin >> palavra;

    while(palavra[i] != '\0'){
        i++;
        tamanho++;
    }

    for(i=0; i<30; i++){
        oculta[i]= '-';
    }

    while((chances > 0) && (acertos < tamanho)){
        cout << "Chances restantes: " << chances << endl;
        cout << "Palavra secreta: ";

        for(i=0; i<tamanho; i++){
            cout << oculta[i];
        }

        cout << endl << "Digite uma letra: ";
        cin >> letra[0];

        for(i=0; i < tamanho; i++){
            if(palavra[i] == letra[0]){
                acerto = true;
                oculta[i] = palavra[i];
                acertos++;
            }
        }
                                                        cout << acertos << " ";
        if(!acertos){
            chances--;
        }
        acertos = false;
    }

    if(acertos == tamanho){
        cout << "Voce venceu!";
    }
    else{
        cout << "Voce perdeu.";
    }

    return 0;
}