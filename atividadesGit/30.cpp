/*
Escreva um programa que exiba na tela a tabuada de todos os números de 1 as 10.
*/
#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int numero;
    for (int i = 0; i <= 10; i++){
        printf(" ============ TABUADA DO NÚMERO %d ============== \n", i);
        for (numero = 0; numero <= 10; numero++){
            printf("%d x %d = %d\n", i, numero, i * numero);
        }
    }
}