/*
Escreva um programa que calcule o IMC de um indivíduo, utilizando a seguinte fórmula
IMC = massa / altura²
*/
#include <iostream>
#include <cmath>
using namespace std;
#include <cstdio>

int main(){
    double massa, altura;
    cin >> massa;
    cin >> altura;
    double IMC = massa / pow(altura, 2);
    printf("IMC: %.2f\n", IMC);


}