/*
Faça um programa que leia uma palavra e verifique se a mesma é palíndromo ( se pode ser lida da mesma forma de trás para frente).
Ex: ANA
*/
#include <iostream>
using namespace std;
#include <cstdio>

int main(){
    string nome;
    cin >> nome;
    string nome2;
    for (int i= (int)nome.length()-1; i>=0; i--){
        nome2 += nome[i];
    }
    if ( nome == nome2 ){
        printf("O nome é palíndromo. ");
    } else{
        printf("O nome não é palíndromo. ");

    }
}