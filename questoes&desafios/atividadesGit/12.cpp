/*
Escreva um programa que calcule a energia cinética de um  objeto em movimento, utilizando a fórmula
E = (mv²) / 2
onde 'E' é a energia cinética, 'm' é a massa do objeto e 'v' é a velocidade.
*/
#include <iostream>
using namespace std;
#include <cstdio>
#include <cmath>

int main(){
    double massa, velocidade;
    double energiaCinetica = pow (massa * velocidade, 2) / 2;
    printf("Energia Cinética: %.2f\n",energiaCinetica);
}