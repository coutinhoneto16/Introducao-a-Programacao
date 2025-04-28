/*
Escreva um programa que calcule a média geométrica entre três números intormados pelo usuário.
M=∛n1*n2*n3
*/
#include <iostream>
#include <cmath>
using namespace std;
#include <cstdio>

int main(){
    double numero1, numero2, numero3;
    cin >> numero1;
    cin >> numero2;
    cin >> numero3;
    double mediaGeometrica = pow(numero1*numero2*numero3, 1.0 / 3.0);
    printf("Média Geométrica: %.2f\n", mediaGeometrica);
}