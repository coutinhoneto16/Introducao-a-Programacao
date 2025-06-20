/*
Escreva um programa que calcule a média aritimética de dois números.
*/
#include <iostream>
using namespace std;
#include <cstdio>

int main(){
    double numero1, numero2;
    cin >> numero1;
    cin >> numero2;
    printf("Média: %2.f\n", (numero1 + numero2)/2);
}