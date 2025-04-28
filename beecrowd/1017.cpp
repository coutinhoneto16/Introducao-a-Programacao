#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int tempoGasto, velocidadeMedia;
    cin >> tempoGasto >> velocidadeMedia;
    double gasolina = (velocidadeMedia * tempoGasto) /12.0;
    printf("%.3f\n", gasolina);

}