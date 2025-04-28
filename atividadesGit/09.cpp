/*
Escreva um programa que calcule o perímetro e a área de um retângulo, utilizando as fórmulas
P = 2(l + c)
A = lc
onde 'l' é a largura e 'c' é o comprimento.
*/

#include <iostream>
using namespace std;
#include <cstdio>

int main(){
    double largura, comprimento;
    cin >> largura;
    cin >> comprimento;
    double perimetro = 2 * (largura + comprimento);
    double area = largura * comprimento;
    printf ("Perimetro: %.2f\n", perimetro);
    printf ("Area: %.2f\n", area);
}