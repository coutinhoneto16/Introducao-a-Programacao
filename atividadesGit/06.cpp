/*
Crie um programa que calcule e exiba o perímetro de uma circunferência, solicitando o raio ao usuário.
C=2*PI*r
*/
#include <iostream>
using namespace std;
#include <cmath>
#include <cstdio>

int main(){
    double raio, perimetro;
    cin >> raio;
    perimetro = 2 * M_PI * raio;
    printf("Perímetro do círculo: %.2f\n", perimetro);
    
}