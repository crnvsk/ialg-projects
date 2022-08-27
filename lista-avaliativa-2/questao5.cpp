#include <iostream>
#include <stdio.h>
#include <stdlib.h> 

using namespace std;

struct Resultado{
    int vetor[5];
    int *vet[];
};

int main(){

    int sorteios;
    cin >> sorteios;
    Resultado *result = new Resultado[4];

    int *ptrSorteios = new int[5+1];
    for(int i=0; i<5+1; i++){
        cin >> ptrSorteios[i];
    }

    for(int i=0; i<5+1; i++){
        cout << ptrSorteios[i] << " ";
    }

    delete ptrSorteios;

    return 0;
}