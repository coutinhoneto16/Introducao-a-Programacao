/*Exercício 8
Tem-se um conjunto de dados contendo a altura e o sexo (M, F) de N
pessoas. Fazer um programa que calcule e escreva:
- A menor e a maior altura do grupo
- A média de altura das mulheres
- O número de homens
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int qtd, qtdHomens = 0, qtdMulheres = 0;
    cin >> qtd;
    double altura[qtd];
    char sexo[qtd];
    double menor = 10, maior = 0, media = 0, alturaMulheres = 0;

    for (int i = 0; i < qtd; i++){
        cin >> altura[i];
        cin >> sexo[i];
    }

    for (int i = 0; i < qtd; i++){
        if (sexo[i] == 'M') {
            qtdHomens++;

        } else {
            qtdMulheres++;
            alturaMulheres += altura[i];
            media = alturaMulheres / qtdMulheres;
        }

        if (altura[i] < menor){
            menor = altura [i];
        }

        if (altura[i] > maior){
            maior = altura [i];
        }
    }
    printf("Menor altura = %.2f\n", menor);
    printf("Maior altura = %.2f\n", maior);
    printf("Media das alturas das mulheres = %.2f\n", media);
    printf("Numero de homens = %d\n", qtdHomens);
}