#include <iostream>
#include <string.h>

using namespace std;

int main(){

    // Declaração da string frase e do char a, usado para comparação dentro do loop while.
    string frase; 
    char a = '0';

    // Entrada na cadeia de caracteres.
    cin >> frase;

    // Declaração do índice.
    int i=0;
    while(i < frase.size()){    // Enquanto índice for menor que o tamanho da frase
        if(a == frase[i]){      // se o char comparador for igual a frase na posição índice
            frase.erase(frase.begin()+i);   // vai apagar o ultimo char digitado, a partir da posição começo da frase + índice.
            i--;    // Decremento do índice dentro da condição.
        } 
        else{       // Senão, char comparador vai ser igual a frase na posição índice.
            a = frase[i];
        }

        i++;    // Incremento do índice fora da condição.
    }
    
    // Saida na entrada.
    cout << frase;

    return 0;
}

    /*string frase;
    cin >> frase;
    int tam = frase.length();
    char vetFrase[tam];

    strcpy (vetFrase, frase.c_str());
    for (int i = 0; i < tam; i++)
        cout << vetFrase[i];*/