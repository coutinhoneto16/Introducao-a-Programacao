/*
Crie um programa que leia uma palavra e exiba a quantidade de vogais presentes na mesma.
*/
#include <iostream>
using namespace std;
#include <cstdio>
#include <string>

int main(){
    string palavra;
    cin >> palavra;
    int vogal=0;
    for (int i=0;i <(int) palavra.length();i++){
        if (palavra[i] == 'A' or  palavra[i] == 'a'
            or palavra[i] == 'E' or  palavra[i] == 'e'
            or palavra[i] == 'I' or  palavra[i] == 'i'
            or palavra[i] == 'O' or  palavra[i] == 'o'
            or palavra[i] == 'U' or  palavra[i] == 'u') {
            vogal +=1;
        }    
    }
    printf("A palavra tem %d vogais \n",vogal);
    
}