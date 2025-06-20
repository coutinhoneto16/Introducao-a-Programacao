/*
Escreva um programa que leia três números e informe se eles podem ser os lados
de um triângulo, ou seja, a soma de dois lados deve ser sempre maior que o terceiro lado
 */

#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    int a,b,c;
    cin >> a >> b >> c;

    if ((b + c > a) && (a + b > c) && (a + c > b)){
        printf("Triangle\n");
    } else{
        printf("Not triangle\n");
    }
}