/*
Crie um programa que leia duas palavras e as contcatene, exibindo a palavra resultante.
*/
#include <iostream>
using namespace std;
#include <cstdio>

int main(){
    string palavra1;
    string palavra2;
    cin >> palavra1 >> palavra2;
    printf("%s%s\n", palavra1.c_str(), palavra2.c_str());
}