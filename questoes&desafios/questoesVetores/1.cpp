/*Exercício 01
Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida,
mostrar na tela o maior número do vetor (supor que não há empates) e a posição do maior
elemento.*/

#include <iostream>
#include <cstdio>
using namespace std;

int main(){ 
    int numero, pos;
    float n, maior;
    cin >> numero;
    float vetor[numero];

    for(int i = 0; i < numero; i++){
        cin >> n;
        vetor[i]=n;

        if (vetor[i] > maior){
            maior = vetor[i];
            pos = i + 1;
        }

    }
    printf("Maior número: %.2f\n", maior);
    printf("Posição do maior número: %d\n", pos);


}
