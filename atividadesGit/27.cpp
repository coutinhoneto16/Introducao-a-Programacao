/*
Escreva um programa que leia dois números e informe qual é o maior.
*/
#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int numero1,numero2;
    cin >> numero1 >> numero2;
    if (numero1 == numero2){
        printf("Os números são iguais!");
    }else if(numero1 > numero2){
        printf("O primeiro número:%d é maior que o segundo:%d!",numero1,numero2);
    }else{
        printf("O segundo número:%d é maior que o primeiro:%d!", numero2,numero1);
    }
}