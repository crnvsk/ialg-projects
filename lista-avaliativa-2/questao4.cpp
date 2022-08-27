#include <iostream>
#include <string.h>

using namespace std;

// Criação do registro "Politico".
struct Politico{
    string partido;
    string nomeCandidato;   
};

// Criação do registro "Operacoes".
struct Operacoes{   
    string nomeOp;
    string politico;
    int valorDesv;
};

int main(){

    // Declaração e entrada no número de candidatos.
    int nCandidatos;
    cin >> nCandidatos;

    // Criação de um vetor "politicos" do tipo "Politico" de tamanho "nCandidatos".
    Politico politicos[nCandidatos];

    // Preenchimento do vetor "politicos" com o nome do partido e nome do candidato.
    for(int i=0; i<nCandidatos; i++){
       cin >> politicos[i].partido >> politicos[i].nomeCandidato;
    }

    // Declaração e entrada da quantidade de operações.
    int qtdeOperacoes;
    cin >> qtdeOperacoes;
    
    // Criação do vetor "operacoes" do tipo "Operacoes" de tamanho "qtdeOperacoes".
    Operacoes operacoes[qtdeOperacoes];

    // Preenchimento do vetor "operacoes" com o nome da operação, nome do político ligado a ela e valor desviado.
    for(int j=0; j<qtdeOperacoes; j++){
       cin >> operacoes[j].nomeOp >> operacoes[j].politico >> operacoes[j].valorDesv;
    }
    
    // Declaração das variáveis partido e operação, utilizadas para busca.
    string partido, operacao;
    cin >> partido >> operacao;

    // Declaração da variável resultado que receberá o valor desviado total.
    int resultado = 0;

    for(int i=0; i<nCandidatos; i++){   // Criação de laço percorrendo a quantidade de candidatos.
        if(partido == politicos[i].partido){    // Teste. Se partido buscado for igual ao partido do politico na posição indice(i).
            for(int j=0; j<qtdeOperacoes; j++){ // Entrada do segundo loop, percorrendo a quantidade de operações.
                if(operacao == operacoes[j].nomeOp){    // Teste. Se operacao buscada for igual ao nome da operacao do vetor operacoes na posicao indice(j).
                    if(operacoes[j].politico == politicos[i].nomeCandidato){    // Ultímo teste. Se o nome do politico do vetor operacoes na posicao indice(j) 
                        resultado += operacoes[j].valorDesv;                    // for igual ao nome do candidato do vetor politicos na posicao indice(i), itera o resultado
                    }                                                           // com o valor de resultado + valor desviado do vetor operacoes na posicao indice(j).
                }
            }
        }       
    }

    // Saida no resultado.
    cout << resultado;

    return 0;
}



