/*Exercício 5
Fazer um programa para ler um vetor de N números inteiros. Em
seguida, mostrar a média aritmética somente dos números pares lidos.*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int qtd, soma=0, npares=0;
    double media=0;
    cin >> qtd;
    int vetor[qtd];

    for (int i = 0; i < qtd; i++){
        cin >> vetor[i];

        if (vetor[i] % 2 == 0){
            soma = soma + vetor[i];
            npares += 1;
            media = soma / npares;
        }
    }
    printf("N pares: %d\n", npares);
    printf("Media: %.1f\n",media);
}
