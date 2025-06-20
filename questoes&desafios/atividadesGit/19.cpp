/*
Escreva um programa que receba um nome e verifique se o mesmo começa com o caracter 'A' ou 'a'.
*/
#include <iostream>
using namespace std;
#include <cstdio>

int main(){
    string nome;
    cin >> nome;
    if (nome[0]=='A' or nome [0] == 'a'){
        printf("A primeira letra do nome começa com A.\n");
    }else{
        printf("Não começa com A.\n");
    }
}