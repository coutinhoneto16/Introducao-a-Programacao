/*
Faça um programa que receba uma palavra e exiba cada letra separadamente.
Atenção: Necessita de um laço de repetição.
*/
#include <iostream>
using namespace std;
#include <cstdio>

int main(){
    string palavra;
    cin >> palavra;
    for (int i = 0; i < (int)palavra.length(); i++){
        printf("%c\n", palavra[i]);
    }

}