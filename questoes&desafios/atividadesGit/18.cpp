/*
Crie um programa que receba uma frase e substitua todos os caracteres 'a' por 'e'.
*/
#include <iostream>
using namespace std;
#include <cstdio>
#include <string>

int main(){
    string frase;
    getline(cin,frase);
    for (int i = 0; i < (int)frase.length(); i++){
        if (frase[i] == 'a'){
            frase[i] = 'e';
        }
    }
    printf("%s", frase.c_str());
}