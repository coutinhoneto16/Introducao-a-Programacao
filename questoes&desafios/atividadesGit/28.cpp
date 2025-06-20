/*
Escreva um programa que solicite três números e exiba o maior deles.
*/
#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    double numero1,numero2,numero3;
    cin >> numero1 >> numero2 >> numero3;
    double maior = numero1;
    

    if (numero2 > maior){
        maior = numero2;
        if (numero3 > maior){
            maior = numero3;
        }
        }
    printf("O maior número é %.2f\n", maior);
    
}