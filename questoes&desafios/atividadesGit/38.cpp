/*
Escreva um programa que leia um número inteiro e informe se o número é primo ou não
 */
#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int num;
    bool primo;
    cin >> num;

    if (num <= 1){
        primo = false;
    }else if (num == 2){
        primo = true;
    }else{
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                primo = false;
                break;
            }else{
                primo = true;
            }
        } 
    }

    if (primo){
        printf("Primo\n");
    }else{
        printf("Nao primo");
    }
}