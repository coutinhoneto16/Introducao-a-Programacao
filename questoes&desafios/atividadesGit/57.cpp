/*
Elabore um programa que leia sucessivos números até a inserção de um valor negativo e, ao final,
apresente a soma de todos os números positivos fornecidos.
 */
#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int num;
    int soma = 0;
   
    do{
        cin >> num;
        if(num > 0){ 
            soma = num + soma;
        }

    }while(num >= 0);

    printf("Soma: %d", soma);
}
