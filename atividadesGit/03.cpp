/*
Crie um programa que calcule e exiba a média aritimética de três notas informadas pelo usuário.
*/
#include <iostream>
using namespace std;
#include <cstdio>

int main(){
    double nota1, nota2, nota3;
    cin >> nota1;
    cin >> nota2;
    cin >> nota3;
    double media = (nota1 + nota2 + nota3)/3;
    printf("Média: %2.f\n", media);
}