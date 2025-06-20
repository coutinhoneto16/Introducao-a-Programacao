/*
Escreva um programa que calcule o perímetro e a área de um triângulo, utilizando as fórmulas
P = a + b + c
A = (b * h ) / 2
onde 'a', 'b' e 'c' são os lados do triângulo e 'h' é a altura relativa ao lado 'b'.
*/
#include <iostream>
using namespace std;
#include <cstdio>

int main(){
    double a,b,c,altura;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> altura;
    double perimetro = (a + b + c);
    double area = (b * altura) / 2;
    printf("Perímetro: %.2f \n", perimetro);
    printf("Area: %.2f \n", area);

}