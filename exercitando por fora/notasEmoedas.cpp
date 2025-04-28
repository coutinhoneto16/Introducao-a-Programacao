#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    double valor;
    cin >> valor;

    int valorInteiro = valor;
    int valorCentavos = (valor - valorInteiro) * 100; //parte decimal convertida para centavos

    int notas[] = {100, 50, 20, 10, 5, 2};
    int moedas[] = {100, 50, 25, 10, 5, 1};

    int qtdNotas[6]; 
    int qtdMoedas[6];

    printf("Notas: \n");

    for (int i = 0; i < 6; i++){
        qtdNotas[i] = valorInteiro / notas[i]; 
        valorInteiro %= notas[i];
        printf("%d nota(s) de R$ %d.00\n", qtdNotas[i], notas[i]);   
    }
    
    printf("Moedas: \n");
    for (int i = 0; i < 6; i++){
        qtdMoedas[i] = valorCentavos / moedas[i];
        valorCentavos %= moedas [i];
        printf("%d moeda(s) de R$ %.2f\n", qtdMoedas[i], moedas[i]/100.00);
        
        

    }

}