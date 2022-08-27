#include <iostream>
#include <string.h>

using namespace std;

struct Politico{
    string partido;
    string nomeCandidato;   
};

struct Operacoes{   
    string nomeOp;
    string politico;
    int valorDesv;
};

int main(){

    int nCandidatos;
    cin >> nCandidatos;
    Politico politicos[nCandidatos];

    for(int i=0; i<nCandidatos; i++){
    
       cin >> politicos[i].partido >> politicos[i].nomeCandidato;
    }

    int qtdeOperacoes;
    cin >> qtdeOperacoes;
    Operacoes operacoes[qtdeOperacoes];

    for(int j=0; j<qtdeOperacoes; j++){
       cin >> operacoes[j].nomeOp >> operacoes[j].politico >> operacoes[j].valorDesv;
    }
    
    string partido, operacao;
    cin >> partido >> operacao;

    int resultado = 0;

    for(int i=0; i<nCandidatos; i++){
        if(partido == politicos[i].partido){
            for(int j=0; j<qtdeOperacoes; j++){
                if(operacao == operacoes[j].nomeOp){
                    if(operacoes[j].politico == politicos[i].nomeCandidato){
                        resultado += operacoes[j].valorDesv;
                    }
                }
            }
        }       
    }

    cout << resultado;

    return 0;
}



