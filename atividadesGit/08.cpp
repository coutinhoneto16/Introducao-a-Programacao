/*
Escreva um programa que calcule o delta de uma equação de segundo grau.
d = b² - 4ac
*/
#include <iostream>
#include <cmath>
using namespace std;
#include <cstdio>

int main(){
    double a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    double delta = pow(b,2) - 4 * a * c;
    printf("Delta: %.2f\n", delta);
}