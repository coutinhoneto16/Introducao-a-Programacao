/*
Escreva um programa que calcule a velocidade média de um objeto, utilizando a fórmula
v = ds/dt
onde 'v' é a velocidade média, 'ds' é a variação de espaço e 'dt' variação de tempo.
*/
#include <iostream>
using namespace std;
#include <cstdio>

int main(){
    double variacaoEspaco, variacaoTempo;
    cin >> variacaoEspaco;
    cin >> variacaoTempo;
    double velocidadeMedia = variacaoEspaco / variacaoTempo;
    printf("Velocidade Média: %.2f\n", velocidadeMedia);
}