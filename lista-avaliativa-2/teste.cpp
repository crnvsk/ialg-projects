#include <iostream>

using namespace std;

int main(){
    
    int vetor[10];

    for(int i=0; i<10; i++){
        cin >> vetor[i];
    }
    for(int i=0; i<10; i++){
        cout << vetor[i] << " ";
    }

    return 0;
}