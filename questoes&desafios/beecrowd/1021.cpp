#include <iostream>
#include <cstdio>
using namespace std;
 
int main() {
    
    int valor, qtdCedulas, qtdMoedas;
    cin >> valor;
    int cedulas[]={100,50,20,10,5,2};
    int moedas[]={100,50,25,10,5,1};
    
    
    
    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++){
        qtdCedulas = valor/cedulas[i];
        valor %= cedulas[i];
        printf("%d nota(s) de R$ %d.00\n", qtdCedulas, cedulas[i]);
    }

    valor %= cedulas[]/100;
    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++){
        qtdMoedas = (valor / moedas[i]);
        valor %= moedas[i];
        printf("%d moeda(s) de R$ %.2f\n", qtdMoedas, moedas[i]/100.0);



    }

 
    
}