/*
Escreva um programa que solicite ao usuário um número e exiba a tabuada desse número,
utilizando um laço de repetição.
*/
#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int numero;
    cin >> numero;
    for (int i=0; i <= 10; i++){
        printf("%d x %d = %d\n",numero, i, numero * i );
    }
}