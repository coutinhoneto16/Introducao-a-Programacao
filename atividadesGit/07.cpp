/*
Escreva um programa que calcule a área de uma circunferência a partir do raio, utilizando a fórmula
A = PI * r²
*/
#include <iostream>
#include <cmath>
using namespace std;
#include <cstdio>

int main(){
    double raio;
    cin >> raio;
    double area = M_PI * pow(raio, 2);
    printf("Área da circuferência: %.2f", area);
}

