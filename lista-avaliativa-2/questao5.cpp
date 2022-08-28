#include <iostream>

using namespace std;

// Criação do registro que irá receber o resultado de um sorteio.
struct Resultado{
    int *dezenas;
};

// Criação da função alocação, que recebe o registro resultado e cria um endereço registro. Depois, aloca um novo vetor de tamanho 5(0-4);
void alocacao(Resultado &registro){
    registro.dezenas = new int[5];
}

int main(){

    // Declaração das variável sorteio e dos iteradores de entrada;
    int sorteios;
    int iterador1 = 0;
    int iterador2 = 0;
    int i;

    cin >> sorteios;
    Resultado qtde[sorteios];

    for(int k=0; k<sorteios; k++){
        alocacao(qtde[k]);
        for(int g=0; g<6; g++){
            cin >> qtde[k].dezenas[g];
            iterador1 += qtde[k].dezenas[g];
        }
        if(iterador2 < iterador1){
                iterador2 = iterador1;
                i = k;
        }

        iterador1 = 0;
    }

    for(int k=0; k<6; k++){
        cout << qtde[i].dezenas[k] << " ";
    }

    return 0;
}