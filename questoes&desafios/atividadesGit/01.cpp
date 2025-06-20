/*
Escreva um programa que solicite ao usuário dois números e exiba a soma, subtração, multiplicação e a divisão
entre eles
*/
#include <iostream>
using namespace std;
#include <cstdio>

int main(){
    double numero1, numero2;
    cin >> numero1;
    cin >> numero2;
    printf("Soma: %2.f\n", numero1 + numero2);
    printf("Subtração: %2.f\n", numero1 - numero2);
    printf("Multiplicação: %2.f\n", numero1 * numero2);
    printf("Divisão: %2.f\n", numero1 / numero2);

}