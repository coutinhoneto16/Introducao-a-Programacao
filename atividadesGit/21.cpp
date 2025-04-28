/*
Crie um programa que leia duas palavras e verifique se a segunda palavra é um anagrama da primeira.
*/
#include <iostream>
using namespace std;
#include <cstdio>
#include <algorithm>
#include <string>

int main(){
    string palavra,palavra2;
    cin >> palavra >> palavra2;
    if (palavra.length() == palavra2.length()){     //compara os tamanhos das palavras
        sort(palavra.begin(), palavra.end());   //ordena a palavra 1 em ordem alfabética
        sort(palavra2.begin(), palavra2.end());     //ordena a palavra 2 em ordem alfabética
        if (palavra == palavra2){   //compara pra saber se tem as mesmas letras
            printf("São anagramas\n");
        }else{
            printf("Não são anagramas\n");}
    }else{
        printf("Não são anagramas\n");
    }
}