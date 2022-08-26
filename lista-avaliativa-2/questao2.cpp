#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int hora[99];
    int minuto[99];

    int i=0;
    cin >> hora[i] >> minuto[i];
    
    while(hora[i] > 0){
        i++;
        cin >> hora[i];
        if(hora[i] > 0) cin >> minuto[i];
        
    }

    int horaBusca, minBusca;
    cin >> horaBusca >> minBusca;

    int porc;
    porc = i*0.7;
    porc = ceil(porc);
    cout << hora[porc] << ":" << minuto[porc] << "\n";
    
    int contador = 0;

    for(int j=0; j<(i-1); j++){
        if(horaBusca > hora[j]){
            contador++;
        }
        else{
            if(minBusca >= minuto[j]){
                contador++;
            }
        }
    }

    double result;
    result = (100.0000*contador)/i;
    cout << result;

    return 0;
}