/*Exercício 02
Faça um programa que leia N números inteiros e armazene-os em um vetor. Em seguida,
mostre na tela:
- Todos os números pares
- A quantidade de números pares*/

#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int qtd, numero, qtdpares=0;
    cin >> qtd;
    int vetor[qtd];


    for (int i = 0; i < qtd; i ++){
        cin >> numero;
        vetor[i] = numero;

        if (vetor[i] % 2 == 0){
            printf("Par: %d\n", vetor[i]);
            qtdpares += 1;

        }

        
    }
    printf("Números pares: %d\n", qtdpares);
}