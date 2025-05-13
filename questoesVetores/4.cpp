/*Exercício 04
Fazer um programa para ler um vetor de ‘N’ números reais. Em seguida:
- Mostrar a média aritmética de todos os elementos.
- Mostrar todos os elementos abaixo da média.
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main(){

    int qtd;
    cin >> qtd;
    double media=0, soma = 0;
    double numeros[qtd];

    for (int i = 0; i < qtd; i++){
        cin >> numeros[i];
        soma = soma + numeros[i];
    }

    media = soma/qtd;
    printf("Média: %.3f\n", media);
    printf("Números abaixo da média: \n");


    for (int i = 0; i < qtd; i++){   
        if (numeros[i] < media){
            printf("%.1f\n",numeros[i]);
        }
    }    
    
}