/*
Faça um programa que receba uma frase e exiba a quantidade de espaços em branco presentes na mesma.
*/
#include <iostream>
using namespace std;
#include <cstdio>
#include <string>

int main(){
    string frase;
    int cont = 0;
    getline(cin,frase);
    for (int i = 0; i < (int)frase.length(); i++){
       if (frase[i] == ' '){ 
            cont +=1;
       }
    } 
    printf("A frase tem %d espaços \n", cont);

}