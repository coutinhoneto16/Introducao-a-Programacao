/*
Escreva um programa que solicite a idade de uma pessoa e exiba se ela é maior de idade ou não.
*/
#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int idade;
    cin >> idade;
    if (idade == 0){
        printf("Digite uma idade válida!");
    }else if(idade >= 18){
        printf("É maior de idade!");
    }else{
        printf("Não é maior de idade");
    }
}