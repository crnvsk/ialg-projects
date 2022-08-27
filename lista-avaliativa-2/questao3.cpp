#include <iostream>

using namespace std;

int main(){

    //Criação da matriz a partir do tamanho N fornecido pelo usuário.
    int tamanho;
    cin >> tamanho;
    int tabuleiro[tamanho][tamanho];

    //Preenchimento de toda a matriz, passando primeiro pelas colunas e depois as linhas.
    for(int i=0; i<tamanho; i++){
        for(int j=0; j<tamanho; j++){
            cin >> tabuleiro[i][j];
        }
    }
    
    //Declaração do contador e da posição X,Y da peça Cavalo.
    int contador = 0;
    int cavaloI, cavaloJ;

    //Busca da posição do cavalo dentro da matriz.
    for(int i=0; i<tamanho; i++){
        for(int j=0; j<tamanho; j++){
            if(tabuleiro[i][j] == 1){
                cavaloI = i;
                cavaloJ = j;
            }  
        }
    }
    
    
    if(tabuleiro[cavaloI-1][cavaloJ-2] == 2 ){              //Testa se o cavalo "come" um peão (==2).
        if(cavaloI-1 >= 0 && cavaloI-1 < tamanho){          //Testa se o cavalo está dentro dos limites aceitáveis na posição X(Linha).
            if(cavaloJ-2 >= 0 && cavaloJ-2 < tamanho){      //Testa se o cavalo está dentro dos limites aceitáveis na posição Y(Coluna).
                contador++;                                 //Aumenta em 1 o contador caso seja possível eliminar um peão.
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

    //Saída no resultado do contador.
    cout << contador;

    return 0;
}