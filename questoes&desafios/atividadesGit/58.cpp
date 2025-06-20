/*
Elabore um programa que receba um valor inteiro e exiba, na tela, todos os termos da sequência de
Fibonacci até alcançar esse valor.

Por exemplo, se for informado o número 8, a saída deverá ser: 0, 1, 1, 2, 3, 5, 8.
*/
#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int total, prox_num = 1, soma = 0, num =0;
    cin >> total;
    
    while (num <= total){

        printf("%d", num);

        soma = num + prox_num;
        num = prox_num;
        prox_num = soma;

        
        if(num <= total){
            printf(", ");}
    }
    printf(".\n");
}