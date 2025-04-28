/*
Escreva um programa que leia três números inteiros e informe se a soma deles é divisível por 5.
 */

#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    int n1,n2,n3;
    cin >> n1 >> n2 >> n3;
    int sum = n1 + n2 + n3;

    if (sum %5 == 0){
        printf("Divisible");
    }else{
        printf("Not divisible");
    }


}