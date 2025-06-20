/*
Escreva um programa que leia um número inteiro 'N' e informe todos os números primos menores que 'N'
*/
#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    int num;
    printf("Digite um número: ");
    cin >> num;

    for (int i = 0; i < num; i++){
        bool primo = true;
        if(i == 0 || i == 1){
            primo = false;
        }
            for(int j=2; j < i; j++){
                if (i % j ==0){
                    primo = false;
                    break;
                }
            }
        if (primo){
            printf("%d\n",i);
        }
        }   
    }
