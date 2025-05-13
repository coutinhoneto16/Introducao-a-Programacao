/*Exercício 6
Fazer um programa para ler um conjunto de nomes de pessoas e suas
respectivas idades. Mostrar na tela o nome da pessoa mais velha.*/

#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int qtd, maior = 0;
    cin >> qtd;
    int idade[qtd];
    string nome[qtd];
    string maiorNome;

    for (int i = 0; i < qtd; i++){
        cin >> nome[i];
        cin >> idade[i];

        if (idade[i] > maior){
            maior = idade[i];
            maiorNome = nome[i];
        }
    }
    printf("Pessoa mais velha: %s\n", maiorNome.c_str());
}