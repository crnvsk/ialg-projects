#include <iostream>

using namespace std;

int main(){

    int tamanho;
    cin >> tamanho;
    int tabuleiro[tamanho][tamanho];

    for(int i=0; i<tamanho; i++){
        for(int j=0; j<tamanho; j++){
            cin >> tabuleiro[i][j];
        }
    }
    
    int contador = 0;
    int cavaloI, cavaloJ;

    for(int i=0; i<tamanho; i++){
        for(int j=0; j<tamanho; j++){
            if(tabuleiro[i][j] == 1){
                cavaloI = i;
                cavaloJ = j;
            }  
        }
    }
    
    if(tabuleiro[cavaloI-1][cavaloJ-2] == 2 ){
        if(cavaloI-1 >= 0 && cavaloI-1 < tamanho){
            if(cavaloJ-2 >= 0 && cavaloJ-2 < tamanho){
                contador++;
            }
        }

    }
    if(tabuleiro[cavaloI-2][cavaloJ-1] == 2){
       if(cavaloI-2 >= 0 && cavaloI-2 < tamanho){
            if(cavaloJ-1 >= 0 && cavaloJ-1 < tamanho){
                contador++;
            }
        }
    }
    if(tabuleiro[cavaloI-2][cavaloJ+1] == 2){
        if(cavaloI-2 >= 0 && cavaloI-2 < tamanho){
            if(cavaloJ+1 >= 0 && cavaloJ+1 < tamanho){
                contador++;
            }
        }
    }
    if(tabuleiro[cavaloI-1][cavaloJ+2] == 2){
        if(cavaloI-1 >= 0 && cavaloI-1 < tamanho){
            if(cavaloJ+2 >= 0 && cavaloJ+2 < tamanho){
                contador++;

            }
        }
    }
    if(tabuleiro[cavaloI+1][cavaloJ-2] == 2){
        if(cavaloI+1 >= 0 && cavaloI+1 < tamanho){
            if(cavaloJ-2 >= 0 && cavaloJ-2 < tamanho){
                contador++;
            }
        }
    }
    if(tabuleiro[cavaloI+2][cavaloJ-1] == 2){
       if(cavaloI+2 >= 0 && cavaloI+2 < tamanho){
            if(cavaloJ-1 >= 0 && cavaloJ-1 < tamanho){
                contador++;
            }
        }
    }
    if(tabuleiro[cavaloI+2][cavaloJ+1] == 2){
        if(cavaloI+2 >= 0 && cavaloI+2 < tamanho){
            if(cavaloJ+1 >= 0 && cavaloJ+1 < tamanho){
                contador++;
            }
        }
    }
    if(tabuleiro[cavaloI+1][cavaloJ+2] == 2){
       if(cavaloI+1 >= 0 && cavaloI+1 < tamanho){
            if(cavaloJ+2 >= 0 && cavaloJ+2 < tamanho){
                contador++;
            }
        }
    }

    cout << contador;

    return 0;
}