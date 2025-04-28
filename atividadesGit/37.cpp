/*
Escreva um programa que receba um número base e um expoente, e então
calcule a potência resultante utilizando um loop de repetição.
 */
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){

    int continuar;
    float base, expoente;
    continuar = 1;


    while (continuar == 1){

        printf("Digite a base e em seguida o expoente\n");
        cin >> base >> expoente;

        printf("%.1f\n",pow(base,expoente));
        printf("Digite 1 se quiser fazer as operacoes e 0 se quiser parar \n");
        cin >> continuar;

    }
}