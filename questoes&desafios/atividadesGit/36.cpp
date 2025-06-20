/*
Escreva um progarma que exiba os números pares de 1 a 50 e os números ímpares de 51 a 100
utilizando laço de repetição
 */

#include <iostream>
#include <cstdio>

using namespace std;

int main(){


printf("==============NUMEROS PARES DE 0 A 50==============\n\n");
    for (int i = 0; i < 50; i++){
    
        if (i % 2 == 00){
            printf("%d,", i);
        }
    }

printf("\n\n==============NUMEROS IMPARES DE 50 A 100==============\n");
    for (int i = 50; i < 100; i++){

        if (i % 2 != 0){
            printf("%d,", i);
        }
    }
}